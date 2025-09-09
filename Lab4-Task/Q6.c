#include <stdio.h>
int main() {
    int age;
    printf("Enter your age to know if you are eligible to vote: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("Eligible.");
    }
    else{
        printf("Sorry, not eligible.");
    }
    return 0;
}