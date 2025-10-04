#include <stdio.h>
int main() {
    int num;

    printf("Enter a number to check it's divisibility: ");
    scanf("%d", &num);

    if(num%2 ==0 && num%3 ==0){
        printf("Number divisible by both");
        }
        else if(num%2 ==0){
            printf("Only divisible by 2.");
        }
        else{
            printf("Only divisible by 3.");
        }
    return 0;
}