# include <stdio.h>


int main(void)
{
    int arr[4][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}
    };
    //arr[0] is the pointer to the first element in first row
    //arr[1] is the pointer to the first element in second row

                //*(arr[0]+1)
                //*arr is the pointer of first element of the first row / the whole array
    printf("%d\n",*(*arr+1));
    printf("%d\n",*(arr[0]+1));

    //another way
    int *ptr;
    ptr=&arr[0][0];//=*arr;
        
}