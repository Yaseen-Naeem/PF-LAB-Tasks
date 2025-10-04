#include <stdio.h>

int main() {
    int num, i, factorial;

    factorial=1;
    printf("Enter a number: ");
    scanf("%d", &num);

     for(i=1; i <=num; i++) {
        factorial *=i;
    }

    printf("\nFactorial is: %d",factorial);
    return 0;
}
