#include <stdio.h>
int main(){
    int employee_ID [12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, user_ID, found;
    found = 0;

    printf("Enter you ID: ");
    scanf("%d", &user_ID);

    for(i=0; i<12; i++){
        if(user_ID == employee_ID[i]){
            found = 1;
            break;
    }
    }
    if(found ==1){
        printf("\nExist");
    }
    else{
        printf("\nNot Exist");
    }
    return 0;
}