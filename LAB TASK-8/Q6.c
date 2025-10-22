#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A'; // Starting ASCII value for 'A'

    for(i = 1; i <= 4; i++) { // 4 rows
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // move to next ASCII character
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
