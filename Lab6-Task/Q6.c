#include <stdio.h>
int main(){
    int num, i, mod;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num ==1){
        printf("1 is neither Prime nor Composite. ");
        return 0;
    }

    for(i=2; i<num; i++){
        mod = num % i;
        if(mod ==0){
            printf("Not Prime");
        return 0;
        }
        }
        
        printf("Prime");
        
    return 0;

}    
