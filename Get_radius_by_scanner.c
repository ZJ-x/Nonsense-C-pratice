#include <stdio.h>
int radius;
float area;

int main(void){
    printf("Enter radius: ");
    scanf("%d",&radius);
    area=(3.14*radius*radius);
    printf("The radius is : %d ,\nand the area is : %f",radius,area);
    return 0;
}