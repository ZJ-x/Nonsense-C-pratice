# include <stdio.h>

int main(void){
    int a[]={1,2,3,4,5,6};
    int *p=&a[3];
    int *q=&a[5];
    printf("%s\n",p<=q?"True":"False");
    printf("%s\n",p>=q?"True":"False");
    q=&a[3];
    printf("%s\n",p==q?"True":"False");
    return 0;
}