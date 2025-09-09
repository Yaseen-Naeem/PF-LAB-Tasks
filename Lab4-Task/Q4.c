#include <stdio.h>
int main () {
    int age, salary;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nEnter your salary: ");
    scanf("%d",&salary);
    // Requirements to approve loan
    if(age >= 25 && salary >=40000){
        printf("You are approved for loan!");       
    }
    else{
        printf("Sorry you are not approved for loan.");
    }
    return 0;
}