#include <stdio.h>

typedef struct movie{
    char title[50];
    char genre[30];
    char director[50];
    int year;
    float rating;
} movie;

void display(movie m){
    printf("\nTitle: %s", m.title);
    printf("Genre: %s", m.genre);
    printf("Director: %s", m.director);
    printf("Release Year: %d", m.year);
    printf("\nRating: %.1f\n", m.rating);
}

int main(){
    int n;
    printf("Enter number of movies: ");
    scanf("%d", &n);

    movie arr[n];

    int choice;
    int count = 0;
    char searchGenre[30];

    while(1){
        printf("\n1. Add New Movie \n2. Search Movie by Genre \n3. Display All Movies \n4. Exit \nChoose option: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                if(count >= n){
                    printf("\nMovie list is full!\n");
                    break;
                }

                printf("\nEnter title: ");
                scanf(" %[^\n]", arr[count].title);

                printf("Enter genre: ");
                scanf(" %[^\n]", arr[count].genre);

                printf("Enter director: ");
                scanf(" %[^\n]", arr[count].director);

                printf("Enter release year: ");
                scanf("%d", &arr[count].year);

                printf("Enter rating: ");
                scanf("%f", &arr[count].rating);

                count++;
                break;

            case 2:
                printf("\nEnter genre to search: ");
                scanf(" %[^\n]", searchGenre);

                int found = 0;
                for(int i=0; i<count; i++){
                    if(strcmp(arr[i].genre, searchGenre) == 0){
                        display(arr[i]);
                        found = 1;
                    }
                }

                if(!found){
                    printf("\nNo movies found in this genre!\n");
                }
                break;

            case 3:
                if(count == 0){
                    printf("\nNo movies added yet!\n");
                }
                else{
                    for(int i=0; i<count; i++){
                        display(arr[i]);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("\nInvalid option!\n");
        }
    }

    return 0;
}
