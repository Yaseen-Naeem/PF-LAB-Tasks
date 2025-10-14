#include <stdio.h>

int main() {
    int age[8];
    int i, youngest;

    for(i = 0; i < 8; i++) {
        printf("Enter age of participant %d: ", i + 1);
        scanf("%d", &age[i]);
    }

    // Assume first participant is youngest initially
    youngest = age[0];

    for(i = 1; i < 8; i++) {
        if(age[i] < youngest) {
            youngest = age[i];
        }
    }

    printf("\nThe youngest participant's age is: %d\n", youngest);

    return 0;
}
