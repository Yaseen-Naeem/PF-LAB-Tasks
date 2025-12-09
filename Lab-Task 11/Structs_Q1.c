#include <stdio.h>

typedef struct flight{
    int flightNo;
    char depart[50];
    char destination[50];
    char date[20];
    int seats;
} flight;

void display(flight f){
    printf("\nFlight Number: %d", f.flightNo);
    printf("\nDeparture City: %s", f.depart);
    printf("\nDestination City: %s", f.destination);
    printf("\nDate: %s", f.date);
    printf("\nAvailable Seats: %d\n", f.seats);
}

void bookseat(flight *f){
    if(f->seats > 0){
        f->seats--;
        printf("\nSeat booked successfully!\n");
    }
    else{
        printf("\nNo seats available!\n");
    }
}

int main(){
    int n;
    printf("Enter number of flights: ");
    scanf("%d", &n);

    flight arr[n];

    for(int i=0; i<n; i++){
        printf("\nEnter flight number: ");
        scanf("%d", &arr[i].flightNo);

        printf("Enter departure city: ");
        scanf(" %[^\n]", arr[i].depart);

        printf("Enter destination city: ");
        scanf(" %[^\n]", arr[i].destination);

        printf("Enter date: ");
        scanf(" %[^\n]", arr[i].date);

        printf("Enter available seats: ");
        scanf("%d", &arr[i].seats);
    }

    int choice, fno;

    while(1){
        printf("\n1. Book Seat \n2. Display Flight Details \n3. Exit \nChoose option: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("\nEnter flight number to book: ");
                scanf("%d", &fno);

                int found1 = 0;
                for(int i=0; i<n; i++){
                    if(arr[i].flightNo == fno){
                        bookseat(&arr[i]);
                        found1 = 1;
                        break;
                    }
                }
                if(!found1){
                    printf("\nFlight not found!\n");
                }
                break;

            case 2:
                printf("\nEnter flight number to display: ");
                scanf("%d", &fno);

                int found2 = 0;
                for(int i=0; i<n; i++){
                    if(arr[i].flightNo == fno){
                        display(arr[i]);
                        found2 = 1;
                        break;
                    }
                }
                if(!found2){
                    printf("\nFlight not found!\n");
                }
                break;

            case 3:
                return 0;

            default:
                printf("\nInvalid option!\n");
        }
    }

    return 0;
}
