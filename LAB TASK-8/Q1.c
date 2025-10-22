#include <stdio.h>
int main() {

    int arr1[5], arr2[5], unionArr[10];
    int i, j, k = 0, found;
    int size1 = 5, size2 = 5;

    printf("Enter 5 values for first array: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr1[i]);
    }

    printf("\nArray 1: ");
    for(i=0; i<5; i++){
        printf("%d\t", arr1[i]);
    }

    printf("\nEnter 5 values for Array 2: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr2[i]);
    }

    printf("\nArray 2: ");
    for(i=0; i<5; i++){
        printf("%d\t", arr2[i]);
    }

    // --- Remove duplicates within arr1 ---
    int tempArr1[5], sizeTemp1 = 0;
    for(i=0; i<size1; i++){
        found = 0;
        for(j=0; j<sizeTemp1; j++){
            if(arr1[i] == tempArr1[j]){
                found = 1;
                break;
            }
        }
        if(!found)
            tempArr1[sizeTemp1++] = arr1[i];
    }

    // --- Remove duplicates within arr2 ---
    int tempArr2[5], sizeTemp2 = 0;
    for(i=0; i<size2; i++){
        found = 0;
        for(j=0; j<sizeTemp2; j++){
            if(arr2[i] == tempArr2[j]){
                found = 1;
                break;
            }
        }
        if(!found)
            tempArr2[sizeTemp2++] = arr2[i];
    }

    // Copy unique elements of arr1 to unionArr 
    for(i=0; i<sizeTemp1; i++)
        unionArr[k++] = tempArr1[i];

    // Add elements of arr2 in unionArr (if not already exist)
    for(i=0; i<sizeTemp2; i++){
        found = 0;
        for(j=0; j<k; j++){
            if(tempArr2[i] == unionArr[j]){
                found = 1;
                break;
            }
        }
        if(!found)
            unionArr[k++] = tempArr2[i];
    }

    // Print  union 
    printf("\nUnion of Array 1 and Array 2: ");
    for(i=0; i<k; i++)
        printf("%d\t", unionArr[i]);

    return 0;
}
