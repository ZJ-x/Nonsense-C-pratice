# include <stdio.h>
# include <math.h>

int main(void)
{
    int var, positionToShift;
    printf("Give a number var: \n");
    scanf("%d",&var);

    printf("Give a number for rightshift: \n");
    scanf("%d",&positionToShift);

    printf("%d shifts right %d position is : %d\n",var,positionToShift,var>>positionToShift);
    printf("%d**%d=%d\n",var,positionToShift,(int)(var/pow(2,positionToShift)));

}