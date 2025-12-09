#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenate_strings(char *old_str, char *new_str) {
    
    // Calculation New Length
    int total_len = strlen(old_str) + strlen(new_str) + 1;

    char *result = (char*)realloc(old_str, total_len * sizeof(char));

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Append the new string to the end of the resized old string
    strcat(result, new_str);

    return result;
}

int main() {
    char temp_buffer[100]; 
    
    char *final_string = (char*)malloc(sizeof(char));
    if (final_string == NULL) return 1;
    *final_string = '\0'; // Start as an empty string

    printf("--- Dynamic String Concatenator ---\n");
    printf("Enter strings to combine. Enter 'Q' to stop.\n\n");

    while (1) {
        printf("Enter a string: ");
        scanf("%s", temp_buffer); 

        // If User Wants To Quit
        if (strcmp(temp_buffer, "Q") == 0) {
            break;
        }

        char *input_str = (char*)malloc((strlen(temp_buffer) + 1) * sizeof(char));
        if (input_str == NULL) {
            printf("Memory error on input.\n");
            break;
        }
        strcpy(input_str, temp_buffer); // Copy from temp buffer to dynamic memory

        char *new_ptr = concatenate_strings(final_string, input_str);

        if (new_ptr == NULL) {
            free(input_str);
            break; 
        }

        // Update the main pointer to the new memory location
        final_string = new_ptr;

        printf("Current Result: %s\n", final_string);

    // Free the small input string
        free(input_str);
    }

    printf("\nFinal Concatenated String: %s\n", final_string);

    // Free Memory
    free(final_string);

    return 0;
}