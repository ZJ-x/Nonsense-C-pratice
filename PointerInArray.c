# include <stdio.h>

static int a[5]={11,22,33,44,55};

int *p=a;

int main(void)
{
    if (a[1]==(*p+1))
        printf("Hi I am ");
    if ((*p+3)==3)
        printf("Harley. ");
    if ((*p+1)==(*p)+1)
    {   
        printf("*p+1 is: %d and (*p)+1 is:%d. ",*p+1,(*p)+1);
        printf("Charely. ");
    }
        
    printf("%d by %d.",(*p+4),(*p+1)+(*p+2));
}