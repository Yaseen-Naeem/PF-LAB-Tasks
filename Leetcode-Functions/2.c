#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n) {
    int i = 0, j = n - 1;
    char temp;

    while(i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char s[n];

    printf("Enter the characters: ");
    for(int i = 0; i < n; i++) {
        scanf(" %c", &s[i]);   
    }

    reverseString(s, n);

    printf("Reversed: [");
    for(int i = 0; i < n; i++) {
        printf("%c", s[i]);
        if(i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
