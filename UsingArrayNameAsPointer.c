# include <stdio.h>

int main(void)
{
    int a[5];
    *a=10;//name of array can be used as a pointer to the first element of an array;
    *(a+1)=20; //  *(a+i)=a[i]
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    return 0;

}