#include <stdio.h>
int main() {
    // 10% discount only for bills above 5000
    float amount;
    float final_amount;
    float disc_amount;
    printf("Dear customer, please tell your bill amount: ");
    scanf("%f",&amount);
    if(amount > 5000){
        disc_amount = 5000 * 0.1;
        final_amount= amount - disc_amount;
        printf("\nYour final amount is: %f", final_amount);
        }
        else{
            printf("\nYour final amount is: %f", amount);
        }
        return 0;
}