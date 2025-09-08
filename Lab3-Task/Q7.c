#include <stdio.h>
int main() {
    float length, width;
    printf("Please enter the length:");
    scanf("\n%f", &length);
    printf("\nPlease enter the width: ");
    scanf("\n%f",&width);
    float area, perimeter;
    area = length * width;
    perimeter = length+length+width+width;
    printf("\nThe area of rectangle is: %.2f", area);
    printf("\nThe perimeter of rectangle is: %.2f", perimeter);
    return 0;
}