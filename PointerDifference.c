# include <stdio.h>

int main(void)
{
    int n[5],i,*p1,*p2;

    p1=n;
    for(i=0;i<5;i++)
    {
        p2=&n[i];
        printf("The difference is: %d\n",p2-(p1+1));
        printf("The address of n[i] is: %d\n:",&n[i]);
    }
}