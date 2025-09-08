#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 2 values for a and b: ");
    scanf("\n%d", &a);
    scanf("\n%d,", &b);
    printf("\na and b before are: %d %d", a,b);
    c=a;
    a=b;
    b=c;
    printf("\n\tAfter swapping and b are: %d %d", a,b);
    return  0;
}