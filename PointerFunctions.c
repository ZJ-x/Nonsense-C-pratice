# include <stdio.h>

int *return_pointer(int *p, int n)
{
    p = p + n;
    return p;
}
int main(void)
{
    int i, *ptr;
    int arr[] = {11, 22, 33, 44, 55};
    i = 4;
 
    printf("Address of arr = %u\n", arr);
 
    ptr = return_pointer(arr, i);
 
    printf("\nAfter incrementing arr by 4 \n\n");
 
    printf("Address of ptr = %u\n\n" , ptr);
    printf("Value at %u is %d\n", ptr, *ptr);
 
    // signal to operating system program ran fine
    return 0;
}