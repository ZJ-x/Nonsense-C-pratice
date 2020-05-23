# include <stdio.h>

//Pointer is special variable that is capable of storing some address


/* Syntax for declaring pointer variable:

   data_type *pointer_name;

   example: int *ptr --> points to integer value

   int x=5;
   int *ptr;
   ptr=&x;<-- assign address of x to ptr
   
   printf("%d",*ptr);   '*' is value of operator which accesses the value stored at the location pointed by pointer.

    */


int main(void){
   int x=5;
   int *ptr;
   ptr=&x;   
   printf("The value of x is : %d\nThe address of x is:%d\nThe value of *ptr is:%d\nThe value of ptr is:%d\n",x,&x,*ptr,ptr); 

}