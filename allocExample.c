# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    unsigned int size = 20;
    int *ptr;
    int i;

    ptr = calloc(size,2);
    for(i=0;i<10;i++)
    {
        *(ptr+i) = i;
        *ptr+=2;
    }

    for(i=0;i<10;i++)
    {
        printf("%d-",*(ptr+i));
    }

    free(ptr);
}