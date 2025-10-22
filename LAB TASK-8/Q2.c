#include <stdio.h>
int main(){
    int arr1[5];
    int arr2[5];
    int commonarr[5];
    int i, j, k;
    k = 0;

    printf("Enter 5 values for first array: ");
    for(i=0; i<5; i++){
        scanf("\n%d", &arr1[i]);
    }

    printf("\nArray 1: ");
    for(i=0; i<5; i++){
        printf("%d", arr1[i]);
        printf("\t");
    }

    printf("\nEnter 5 values for Array 2: ");
    for(i=0; i<5; i++){
        scanf("\n%d", &arr2[i]);
    }

    printf("\nArray 2: ");
    for(i=0; i<5; i++){
        printf("%d", arr2[i]);
        printf("\t");
    }

    for(i = 0; i<5; i++) {
        for(j = 0; j<5; j++) {
            if(arr1[i] == arr2[j]) {        // common element found
                // Check if already added to intersection array
                int found = 0;
                for(int m = 0; m<k; m++) {
                    if(commonarr[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    commonarr[k++] = arr1[i]; // add unique common element
            }
        }
    }

    // Print intersection
    if(k == 0)
        printf("No common elements.\n");
    else {
        printf("\nIntersection: ");
        for(i = 0; i<k; i++)
            printf("%d ", commonarr[i]);
    }

    return 0;
}