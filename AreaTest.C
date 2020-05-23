#include <stdio.h>

int main(void){
    float PI=3.1415926f;
    float fArea,fRadius;

    puts("Enter the radius: ");
    scanf("%f",&fRadius);
    fArea=fRadius*fRadius*PI;
    printf("The area is %.2f\n",fArea);

    return 0;
}