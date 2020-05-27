# include <stdio.h>

int Statement()
{
    printf("This is a function call.\n");
} 

int isEven(int n)
{
     return !(n%2);
}

int isOdd(int n)
{
    return n%2;
}

int f1(int n)
{
    return n;
}

int f2(int n)
{
    return 2*n;
}

void ff(int n)
{
    printf("%d",n);
}

int main(void)
{
    int (*functionPointer)()=&Statement; // here type (*function pointer name)(function arguements)=& original function name;
    (*functionPointer)(); // is equivalent to Statement();
    
    int (*fptr)(int);

    fptr=&isEven;                   //can be also called (*fptr)(2)
    printf("2 is even number :%s\n",fptr(2)==1?"True":"False");//


    int (*f)(int);
    f=&f1;
    ff(f(4));
    printf("%d",f(4));
    f=&f2;
    ff(f(2));
    printf("%d",f(2));   
}