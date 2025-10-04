#include <stdio.h>
int main(){
    int num, a, b;
    printf("Enter Num: ");
    scanf("%d", &num);

    a= num << 1; //shift binary value of num by 1 to Left
    printf("\n%d",a);

    b=num >> 1; //shift binary value of num by 1 to right
    printf("\n%d", b);

    return 0;

}