#include <stdio.h>
int main() {
    float balance, remain;
    int withdrawal;
    printf("Please enter your balance for withdrawal first: ");
    scanf("%f",&balance);
    printf("\nEnter the amount you want to withdraw: ");
    scanf("%d",&withdrawal);
    if(balance > withdrawal && withdrawal % 500 ==0){
        remain = balance - withdrawal;
        printf("\nYour withdrawal is: %d", withdrawal);
        printf("\nYour remaining balance is: %.2f", remain);
    }
    else if(balance <= withdrawal){
        printf("insufficient balance!");
    }
    else{
        printf("Only withdrawal in multiple of 500 is allowed!");
    }
    return 0;
    }
