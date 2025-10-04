#include <stdio.h>
#include <string.h>

int main() {

    int age;
    char gender[10];

    printf("Enter age: ");
    scanf("%d", &age);


    if(age>=18){
    printf("\nEnter Gender (Male/Female): ");
    scanf("%s", gender);
        if(strcmp(gender, "Male")==0){
            printf("Adult Male");
        }
        else{
            printf("Adult Female");
        }
    }
    else{
        printf("Minor");

    }
    return 0;
}