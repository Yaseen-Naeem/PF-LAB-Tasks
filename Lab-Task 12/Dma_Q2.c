#include <stdio.h>
#include <stdlib.h>   

int main() {

    int n, newSize;
    int *arr;

    printf("Enter number of integers to store: ");
    scanf("%d", &n);

    // Allocate memory using calloc (initial values = 0)
    arr = (int *) calloc(n, sizeof(int));

    // Check allocation success
    if(arr == NULL){
        printf("Memory allocation failed! Exiting program.\n");
        return 1;
    }

    printf("\nInitial values (set by calloc):\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask user if they want to enlarge the array
    char choice;
    printf("\nDo you want to increase the size of the array? (y/n): ");
    scanf(" %c", &choice);

    if(choice == 'y' || choice == 'Y'){
        printf("\nEnter new size (must be larger than %d): ", n);
        scanf("%d", &newSize);

        // Reallocate memory
        int *temp = realloc(arr, newSize * sizeof(int));

        if(temp == NULL){
            printf("Reallocation failed! Memory unchanged.\n");
            free(arr); // free old memory
            return 1;
        }

        arr = temp;

        printf("\nEnter values for the new elements:\n");
        for(int i = n; i < newSize; i++){
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        n = newSize;  // update size
    }

    printf("\nFinal array values:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free Memory
    free(arr);
    printf("\nMemory successfully freed.\n");

    return 0;
}
