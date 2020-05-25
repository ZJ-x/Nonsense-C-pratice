# include <stdio.h>

int main(void){
    int arr[7]={1,2,3,4,5,6,7};
    int *ptr=&arr[0];

    printf("*ptr:%d\nptr:%d\n",*ptr,ptr);
    ptr+=3;
    printf("*ptr:%d\nptr:%d\n",*ptr,ptr);

    //the address gap is 12 bits here which is 3 bytes.
    //p+=j is equivalent to &arr[0+j]        p is intialized at arr[0]
}