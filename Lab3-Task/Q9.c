#include <stdio.h>

int main() {
char name[100];
printf("Enter your name:");
fgets(name, 100, stdin); // Takes user input
int age;
printf("Confirm your age: ");
scanf("%d", &age);
printf("\n\tYour name is: %s", name);// Prints the string output with tab
printf("\n\tYour age is: %d", age);
return 0;
}