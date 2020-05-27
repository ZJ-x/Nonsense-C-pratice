# include <stdio.h>
# include <string.h>

// the unique feature of union is , there is only one element in union can store value. 
union Data
{
    int i,j; // same type variables will always have the same value!
    float f;
    char str[30];
}data; //intialize a Data Union which named data

int main(void)
{   
    
    data.i=1;
    printf("i: %d\nj: %d\nf: %f\nstr: %s\n",data.i,data.j,data.f,data.str);

    data.j=2;
    printf("i: %d\nj: %d\nf: %f\nstr: %s\n",data.i,data.j,data.f,data.str);

    data.f=1.0;
    printf("i: %d\nj: %d\nf: %f\nstr: %s\n",data.i,data.j,data.f,data.str);

    strcpy(data.str,"Hello!");
    printf("i: %d\nj: %d\nf: %f\nstr: %s\n",data.i,data.j,data.f,data.str);
}