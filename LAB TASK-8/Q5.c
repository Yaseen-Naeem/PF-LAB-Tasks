#include <stdio.h>
int main() {
    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
        };
    int i, j;
    int total;
    float avg;

    // Total marks of each student
    printf("Total marks of each student:\n");
    for(i = 0; i < 5; i++) {
        total = 0;
        for(j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d: %d\n", i+1, total);
    }

    // Average marks of each subject
    printf("\nAverage marks of each subject:\n");
    for(j = 0; j < 3; j++) {
        total = 0;
        for(i = 0; i < 5; i++) {
            total += marks[i][j];
        }
        avg = total / 5.0;
        if(j == 0) 
            printf("Subject 1: %.2f\n", avg);
        else if(j == 1) 
            printf("Subject 2: %.2f\n", avg);
        else
            printf("Subject 3: %.2f\n", avg);
    }

    return 0;
}
