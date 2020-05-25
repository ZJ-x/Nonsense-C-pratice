# include <stdio.h>

int main(void){
    int i = 10;
    int *p,*q;
    p=&i;
    q=p; 
    int *ptr=&i;

    printf("The value of i is: %d\nThe address of i is:%d\nThe value of p is:%d\nThe value of *p:%d\nThe value of q is:%d\nThe value of *q:%d\n",i,&i,p,*p,q,*q);
    printf("The value of ptr is :%d\nThe value of *ptr os :%d",ptr,*ptr);
}