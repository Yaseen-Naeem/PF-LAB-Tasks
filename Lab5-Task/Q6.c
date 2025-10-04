#include <stdio.h>
int main(){

    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    i=i++ +5;
    printf("\n%d", i);


    printf("\n\nEnter a number: ");
    scanf("%d", &i);
    i=++i +5;
    printf("\n%d", i);
    return 0;
    
}