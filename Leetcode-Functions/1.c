#include <stdio.h>

int main() {
    int n, i, j = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++) {
        if(nums[i] != 0) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    printf("Output: [");
    for(i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if(i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
