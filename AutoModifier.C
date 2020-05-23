#include <stdio.h>

int varG;

int main(void){
    int var;//=int var
    printf("%d %d",var,varG);// if auto int is not initialized , garbage will be printed
    //int will print 4194432
                             // global variable will be 0 by default
    return 0;
}