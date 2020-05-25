# include <stdio.h>

int add(int b[], int len){// can also be declared as (int *b, int len)
    int sum=0,i;
    for(i=0;i<len;i++){
        sum+=b[i];
    }
    return sum;
}

int main(void)
{
    int a[]={1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d",add(a,len));// a is treated as a pointer
    return 0; 
}