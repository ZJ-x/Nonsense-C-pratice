# include <stdio.h>

int a=1,b=2;

int main (void)
{
    printf("The address of a: %d\nThe address of b: %d\n",&a,&b);
    int *ptr=&a;
    printf("The ptr:%d\nThe *ptr:%d\n",ptr,*ptr);
    ptr++;
    printf("The ptr:%d\nThe *ptr:%d\n",ptr,*ptr);
}