# include <stdio.h>

int main(void){
    int a[]={5,16,7,89,45,32,23,10};
    int *p=&a[0];
    printf("%d\n",*(p++));//postfix 
    printf("%d\n",*p);
    return 0; 
}