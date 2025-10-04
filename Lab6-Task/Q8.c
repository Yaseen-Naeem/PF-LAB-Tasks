#include <stdio.h>
int main(){

    int num, initial, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    initial = num; 

    while(num > 0) {
        digit = num % 10;                   // get last digit
        reverse = reverse * 10 + digit;    // build reversed number
        num = num / 10;                   // remove last digit
    }
    if(reverse == initial) {
        printf("\nA Palindrome");
    } 
    else {
        printf("\nNot a Palindrome");
    }

    return 0;
}