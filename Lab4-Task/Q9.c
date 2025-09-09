#include <stdio.h>
int main() {
    int marks;
    float attendance;
    printf("Enter your internal marks: ");
    scanf("%d", &marks);
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);
    if(marks >=40 && attendance >=75){
        printf("Allowed to sit in final exam");
    }
    else{
        printf("Not allowed");
    }
    return 0;
}