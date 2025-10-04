#include <stdio.h>
int main() {

    int device, brand;
    printf("Choose A device you want: \n1: Phone \n2: Laptop \n: ");
    scanf("%d", &device);

    switch(device){
        case 1:
        printf("Choose a brand: \n1: Samsung \n2: Apple \n: ");
        scanf("%d", &brand);

        switch(brand){
            case 1:
            printf("\nA Samsung Phone.");
            break;

            case 2:
            printf("\nAn Apple Phone.");
            break;
        }
        break;

        case 2:
        printf("Choose a brand: \n1: Dell \n2: HP \n: ");
        scanf("%d", &brand);

        switch(brand){
            case 1:
            printf("\nA Dell Laptop.");
            break;

            case 2:
            printf("\nA Hp Laptop.");
            break;
        }
        break;


    }
    return 0;
}