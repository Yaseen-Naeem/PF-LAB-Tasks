#include <stdio.h>
int main(){
    int i, series, n, prev1, prev2;
    n=10;
    prev1=0;
    prev2=1;

    printf("0");
    printf("\n1");

    for(i=3; i<=n; i++){ //First 2 term: 0 and 1 are already printed so loop starts from 3rd term
        series=prev1+prev2;
        printf("\n%d", series);
        prev1=prev2;
        prev2=series;
        }
    return 0;
}