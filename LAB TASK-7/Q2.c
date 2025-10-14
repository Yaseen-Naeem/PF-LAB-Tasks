#include <stdio.h>
int main(){
    int i;
    float marks[10], sum =0;
    float average;
    average = 0;
    sum = 0;

    for(i=0; i<10; i++){
        printf("Enter your marks: ");
        scanf("%f", &marks[i]);

        sum+=marks[i];
        }
    average = sum / 10;
    printf("Average is %.2f", average);
    return 0;
}