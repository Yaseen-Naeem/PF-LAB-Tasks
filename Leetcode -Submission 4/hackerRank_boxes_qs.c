#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

int main() {
    int numBoxes;
    const int TUNNEL_HEIGHT = 41;

    printf("Enter the number of boxes: ");
    scanf("%d", &numBoxes);

    struct Box boxes[numBoxes];

    printf("Enter length, width, height for each box (space-separated):\n");
    for(int i = 0; i < numBoxes; i++) {
        printf("Box %d:\n", i+1);
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    printf("Volumes of boxes that fit through the tunnel:\n");
    for(int i = 0; i < numBoxes; i++) {
        if(boxes[i].height < TUNNEL_HEIGHT) {
            int volume = boxes[i].length * boxes[i].width * boxes[i].height;
            printf("%d\n", volume);
        }
        printf("\n");
    }

    return 0;
}
