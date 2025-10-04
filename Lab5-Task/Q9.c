#include <stdio.h>
int main(){

    int num,a;
    printf("Enter a number to see if it's Odd or Even: ");
    scanf("%d", &num);

    a=1;
    if(num & a ==1){
        printf("%d is Odd.", num);
    }
    else{
        printf("%d is Even.", num);
    }
    return 0;

}