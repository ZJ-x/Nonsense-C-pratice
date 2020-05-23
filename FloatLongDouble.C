#include <stdio.h>

/*float->4 bytes
double->8 bytes
long double->12 bytes
*/

int main(void){
    int var=4/9;
    float var1=4/9;
    float var2=4.0/9.0;

    printf("%d\n%f\n%f\n",var,var1,var2);
}