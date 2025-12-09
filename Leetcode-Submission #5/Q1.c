#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arr[10];         
    int cols[10];         
    printf("Enter number of columns for each of the 10 rows:\n");

    for(int i = 0; i < 10; i++){
        printf("Columns for Row %d: ", i + 1);
        scanf("%d", &cols[i]);

        arr[i] = (int *) malloc(cols[i] * sizeof(int));

        // Check allocation
        if(arr[i] == NULL){
            printf("Memory allocation failed for row %d!\n", i + 1);
            return 1;
        }

        for(int j = 0; j < cols[i]; j++){
            arr[i][j] = i + 1;
        }
    }

    printf("\n----- Output -----\n");
    for(int i = 0; i < 10; i++){
        printf("Row %d → ", i + 1);
        for(int j = 0; j < cols[i]; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free all rows
    for(int i = 0; i < 10; i++){
        free(arr[i]);
    }

    printf("\nMemory freed successfully.\n");

    return 0;
}
