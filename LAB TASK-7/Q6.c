#include <stdio.h>
int main(){
    int sale[10];
    int i, sum;
    sum = 0;

    printf("1. Enter a postive value for profit \n2. Enter a negative value for Loss: ");
    for(i=0; i<10; i++){
        scanf("\n%d", &sale[i]);
    }

    printf("\nSum of Profit Values: ");
    for(i=0; i<10; i++){
        if(sale[i] > 0){
            sum+=sale[i];
        }
    }
    printf("\t%d", sum);
    return 0;
}