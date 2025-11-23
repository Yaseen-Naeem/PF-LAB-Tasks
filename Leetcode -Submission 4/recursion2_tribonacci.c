#include <stdio.h>

int trib(int n) {
    if(n == 0)
        return 0;
    if(n == 1 || n == 2)
        return 1;
    return trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main() {
    int n, result;

    printf("Enter the value of n to find Tn in Tribonacci sequence: ");
    scanf("%d", &n);

    result = trib(n);

    printf("Tribonacci number T%d is: %d\n", n, result);

    return 0;
}
