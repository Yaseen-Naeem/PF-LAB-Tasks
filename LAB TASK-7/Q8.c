#include <stdio.h>
int main(){
    int num[10];
    int i, asc, prev;
    asc = 1;

    printf("Enter 10 numbers and check Order: ");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    //checking Order
    for(i=1; i<10; i++){
        prev = num[i-1];
        if(num[i] < prev){
            asc = 0;
            break;
        }
    }
    if(asc == 1){
        printf("\nAscending Order.");
    }
    else{
        printf("\nNot Ascending Order.");
    }
    return 0;
}