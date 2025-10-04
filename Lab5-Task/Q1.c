#include <stdio.h>
int main() {

    int marks;
    printf("Enter Student's Marks: ");
    scanf("%d",&marks);

    if(marks>=50){
        if(marks>=85){
            printf("\nPassed with Distinction!");
        }
        else{
            printf("\nJust passed.");
        }
        }
        else{
            printf("\nDidn't pass.");
        }
        return 0;
    }