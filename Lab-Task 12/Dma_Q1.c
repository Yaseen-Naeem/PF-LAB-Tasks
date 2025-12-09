#include <stdio.h>
#include <stdlib.h>   

int main() {

    int n;
    int *arr;

    printf("How many integers do you want to store? ");
    scanf("%d", &n);

    // Memory Allocation
    arr = (int *) malloc(n * sizeof(int));

    // Check if memory allocated successfully
    if(arr == NULL){
        printf("Memory allocation failed! Program exiting.\n");
        return 1;  
    }

    printf("\nEnter %d integers:\n", n);
    for(int i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nYou entered:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);
    printf("\nMemory freed successfully.\n");

    return 0;
}
