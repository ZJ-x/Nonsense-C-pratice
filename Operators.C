# include <stdio.h>

int main(void)
{
    int a=(printf("Hello\n"),2);
    printf("%d\n",a);

    int b=(a>3)?4:5;
    printf("%d\n",b);
}