#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 12){
        printf("Your ticket price is: 200");
        }
    else if(age >= 12 && age <18){
        printf("Your ticket price is: 300");
    }
    else if(age >= 18 && age <= 60){
        printf("Your ticket price is: 500");
    }
    else{
        printf("Your ticket price is: 250");
    }
return 0;
}