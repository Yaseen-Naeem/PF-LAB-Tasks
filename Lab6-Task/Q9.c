#include <stdio.h>
int main(){
    int num, i, multiply;

    printf("Enter number to print it's multiplication Table: ");
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        multiply=num*i;
        printf("\n%d x %d     %d",num, i, multiply);
    }
    return 0;
}