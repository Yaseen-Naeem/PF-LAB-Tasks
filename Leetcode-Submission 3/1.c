#include <stdio.h>
#include <string.h>

int main() {
    char s[100];  
    int i, j;
    char temp;

    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);

    i = 0;
    j = n - 1;

    while(i < j) {
        while(i < j && !(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                         s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            i++;

        while(i < j && !(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||
                         s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
            j--;

        if(i < j) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }

    printf("Output: %s\n", s);

    return 0;
}
