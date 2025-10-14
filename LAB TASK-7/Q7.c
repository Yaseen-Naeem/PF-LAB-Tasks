#include <stdio.h>
int main(){
    int num[10000];
    char text[10000];
    int i, sum, j;
    sum = 0;
    j = 0;

    printf("Enter a text using numbers and letters and special characters: ");
    fgets(text, 10000, stdin);

    printf("\n%s", text);

    printf("\nDigits are: ");
    for(i=0; text[i] != '\0'; i++){
        if(text[i] >= '0' && text[i] <= '9'){
            num[j] = text[i] - '0';
            printf("\t%d", num[j]);
        }
        j++;
    }

    for(i=0; i<j-1; i++){
    sum+=num[i];}
    printf("\n%d", sum);
    return 0;
}