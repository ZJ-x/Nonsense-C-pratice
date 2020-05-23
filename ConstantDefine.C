# include <stdio.h>

# define PI 3.14159 //avoid semicolon

# define add(x,y) x+y

const int var=15; //const data_type data_name assigning value 

int main(void){
    printf("The constant var is: %d\n",var);
    printf("The addition is : %d\n",add(4,3));
    printf("Date: %s\nTime: %s\n",__DATE__,__TIME__);
}