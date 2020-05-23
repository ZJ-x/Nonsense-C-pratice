#include <stdio.h>

int main(void){
    int var=1;
    int *ip;
    int zz;
    ip=&var;

    printf("The address of var is: %x\n",&var);
    printf("The value of ip is %d\n",*ip);

    var=2;
    printf("The value of ip is %d\n",*ip);

}