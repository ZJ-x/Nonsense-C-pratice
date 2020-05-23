#include <stdio.h>

int main(void){
    int selection;
    printf("Please enter the selection case.");
    scanf("%d",&selection);
    switch (selection){
        case 1:
            printf("This is case 1.");
            break;
        case 2:
            printf("This is case 2.");
            break;
        default:
            printf("This is default case.");
            break;
    }
}