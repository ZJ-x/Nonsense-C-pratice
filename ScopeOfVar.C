#include <stdio.h>

// int main(){
//     int var = 34;//local var in main
//     printf("%d",var);
//     return 0;
// }

// int fun (){
//     printf("%d",var);
// }

int fun();

// int main(){
//     int var=4;
//     {
//         int var=3;
//         printf("%d\n",var);
//     }
//     printf("%d",var);
// }
int var = 10;

int fun (){
   printf("%d",var);
}

int main(){
    int var=3;// local to the main
    printf("%d\n",var);//use the local first  
    fun();
}