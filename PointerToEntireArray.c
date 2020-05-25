# include <stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int (*p)[5]=&a;// p is the pointer of entire array
    printf("%d",*((*p)+1));
}