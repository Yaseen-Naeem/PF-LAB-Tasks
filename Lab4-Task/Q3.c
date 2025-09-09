#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter 3 numbers to find the largest number: ");
    printf("\nnum1: ");
    scanf("%d",&num1);
    printf("\nnm2: ");
    scanf("%d", &num2);
    printf("\nnum3: ");
    scanf("%d", &num3);
    if(num1 > num2){
        if(num1> num3){
            printf("num1 is largest of 3");           
        }
        else{
            printf("num3 is largest");
        }
    }
    else if(num2 > num3){
        printf("num2 is largest of 3");
    }
    else{
        printf("num3 is largest of 3");
    }
    return 0;
}