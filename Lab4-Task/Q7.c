#include <stdio.h>
int main() {
    int in, password;
    in = 1234;
    printf("Please enter the password.");
    scanf("%d",&password);
    if(password==in){
        printf("Access granted");
    }
    else{
        printf("Access denied");
    }
    return 0;
}