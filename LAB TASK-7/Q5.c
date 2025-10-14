#include <stdio.h>
int main(){
    int j, temp, num, i, arr[12];
    int new_arr[12];
    j=0;

    printf("Enter the numbers: ");
    for(i=0; i<12; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array is: ");
    for(i=0; i<12; i++){
        printf("\t%d", arr[i]);
    }

    printf("\nEnter the number you want to remove: ");
    scanf("%d", &num);

    printf("\nNew Array is: ");
    for(i=0; i<12; i++){
        if(arr[i] == num){
            continue;
        }
        new_arr[j] = arr[i];
        printf("\t%d", new_arr[j]);
        j++;
    }

    temp = new_arr[0];
    for(i=0; i<j-1; i++){
        new_arr[i] = new_arr[i+1];
        }

    new_arr[j-1] = temp;
    printf("\nFinal array is: ");
    for(i=0; i<=j-1; i++){
        printf("\t%d", new_arr[i]);
    }

    
    return 0;
}