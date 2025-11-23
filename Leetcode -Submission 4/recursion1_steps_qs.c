#include <stdio.h>

int climb(int n) {
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    return climb(n - 1) + climb(n - 2);
}

int main() {
    int n, result;

    printf("Enter number of steps: ");
    scanf("%d", &n);

    result = climb(n);

    printf("Number of ways to climb: %d\n", result);

    return 0;
}
