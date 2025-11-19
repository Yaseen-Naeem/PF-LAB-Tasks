#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    int len, isPalindrome;
    char words[50][100]; 

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for(i = 0; i < n; i++) {
        len = strlen(words[i]);
        isPalindrome = 1; // assume it is a palindrome

        for(j = 0; j < len / 2; j++) {
            if(words[i][j] != words[i][len - j - 1]) {
                isPalindrome = 0; 
                break;
            }
        }

        if(isPalindrome) {
            printf("First palindrome: %s\n", words[i]);
            return 0; // stop after finding first palindrome
        }
    }

    printf("No Palindrome \n");
    return 0;
}
