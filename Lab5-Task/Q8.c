#include <stdio.h>
int main() {

    int num,a,z;
    a=2;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    z= num ^ a;
    printf("\nAfter toggle: %d", z);

    return 0;

}