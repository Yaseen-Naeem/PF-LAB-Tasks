#include <stdio.h>
int main(){
    int arr[6];
    int i, temp;
    
    printf("Enter the numbers: ");
    for(i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    temp = arr[5];

    for(i=5; i>0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
    printf("\nArray After Shifting: ");
    for(i=0; i<6; i++){
        printf("\t\t%d", arr[i]);
    }


    return 0;
}