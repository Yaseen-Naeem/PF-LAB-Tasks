#include <stdio.h>
int main() {
    float temp;
    printf("Enter today's temperature");
    scanf("%f",&temp);
    if(temp > 30){
        printf("Hot day");
    }
    else{
        printf("Pleasant day");
    }
    return 0;
}