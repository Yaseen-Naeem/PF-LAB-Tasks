#include <stdio.h>

int main(){
    int Continent, Country;

    printf("Enter a Continent: \n1: Europe \n2: Asia \n\n- ");
    scanf("%d", &Continent);

    switch(Continent){
        case 1:
        printf("Choose 1 or 2: " );
        scanf("%d", &Country);
        switch(Country){
            case 1:
            printf("Country is France, Continent is Europe.");
            break;

            case 2:
            printf("Country is Germany, Continent is Europe.");
            break;
            }
            break;

            case 2:
            printf("Choose 1 or 2: " );
        scanf("%d", &Country);
        switch(Country){
            case 1:
            printf("Country is Pakistan, Continent is Asia.");
            break;

            case 2:
            printf("Country is India, Continent is Asia.");
            break;
            }
            break;
    }
    return 0;
}
