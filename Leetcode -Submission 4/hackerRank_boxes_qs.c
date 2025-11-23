#include <stdio.h>

int main() {
    int numBoxes;
    int length, width, height;
    int TUNNEL_HEIGHT = 41;  

    printf("Enter the number of boxes: ");
    scanf("%d", &numBoxes);

    printf("Enter length, width, height for each box:\n");

    for(int i = 0; i < numBoxes; i++) {
        printf("Box %d:\n", i+1);
        scanf("%d %d %d", &length, &width, &height);

        if(height < TUNNEL_HEIGHT) {
            printf("%d\n", length * width * height);
        }
        printf("\n");
    }

    return 0;
}
