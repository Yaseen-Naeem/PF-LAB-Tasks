#include <stdio.h>
int main() {
    int maths, science, english;
    //Marks of all subjects are out of 100
    printf("\nPlease enter your marks in maths: ");
    scanf("%d", &maths); 
    printf("Enter marks in science: ");
    scanf("%d", &science);
    printf("Marks in english: ");
    scanf("%d", &english);
    float percentage;
    percentage = ( (maths+science+english)/300.0) *100;
    printf("\nYour percentage is: %f", percentage);
    return 0;
}