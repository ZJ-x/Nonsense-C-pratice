# include <stdio.h>

int main(int argc, char *argv[])
{   //argv[0] is the program name
    printf("Full is :%s %s\n",argv[1],argv[2]);
    printf("The address of argv 1 is: %p\nThe address of argv 2 is: %p",&argv[1],&argv[2]);
}