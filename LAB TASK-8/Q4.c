#include <stdio.h>
int main() {
    int temp[7][3]; // 7 days, 3 shifts
    int i, j;
    float avg;

    // Input temperatures
    for(i = 0; i < 7; i++) {
        printf("Enter temperatures for day %d (morning, afternoon, night): ", i+1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &temp[i][j]);
        }
    }

    // Display temperature table
    printf("\nTemperature Table: ");
    printf("\nDay\tMorning\tAfternoon\tNight\n");
    for(i = 0; i < 7; i++) {
        printf("%d\t", i+1);
        for(j = 0; j < 3; j++) {
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }

    // Calculate and display average temperature for each day
    printf("\nAverage temperature for each day:\n");
    for(i = 0; i < 7; i++) {
        avg = 0;
        for(j = 0; j < 3; j++) {
            avg += temp[i][j];
        }
        avg = avg / 3;
        printf("Day %d: %.2f\n", i+1, avg);
    }

    return 0;
}
