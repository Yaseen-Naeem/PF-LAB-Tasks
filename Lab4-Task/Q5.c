#include <stdio.h>
int main() {
    float num1, num2, result; //taking input from user
    int choice; // 1,2,3,4 can be user's choice for operator
    printf("Enter 1st number: ");
    scanf("%f",&num1);
    printf("\nEnter 2nd number: ");
    scanf("%f",&num2);
    // display choices to user
    printf("Choose the operator: ");
    printf("1. Addition. \n2. Subtraction. \n3. Multiply. \n4. Divide.");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        result=num1+num2;
        printf("Result = %f", result);
        break;

        case 2:
        result=num1-num2;
        printf("Result = %f", result);
        break;

        case 3:
        result=num1*num2;
        printf("Result = %f", result);
        break;

        case 4:
        if(num2 != 0){
            result= num1/ num2;
            printf("Result = %f", result);
        }
        else{
            printf("Division by zero not allowed");
        }
        break;

        default:
        printf("Invalid choice. make choice between 1-4");
    }
    return 0;
    }