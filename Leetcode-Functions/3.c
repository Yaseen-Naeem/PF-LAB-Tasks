#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if(n == 0)
        return 0;

    int i, j = 1;

    for(i = 1; i < n; i++) {
        if(nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;  
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("k = %d\n", k);

    printf("Array after removing duplicates: [");
    for(i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if(i < k - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
