# include <stdio.h>
# include <string.h>

int main(void)
{   
    /*  char a[10]="  "   */

    //str1 is an array of char
    char str1[20]="This is string 1!";//{'T','h','i','s',' ', 'i','s', ' ','s','t','r','i','n','g',' ', '1','!','\n'};
    //str1=62220; str1="....."; invlad sytnax
    printf("The size of str1 is: %d\n", sizeof(str1));
    printf("str1: %d\n*str: %c\n&str1[0]:%d\n",str1,*str1,&str1[0]);

    printf("str1+1 :%d and &str1[1] :%d\n*str1+1:%c, *(str+1):%c and str1[1]:%c\n",str1+1,&str1[1],*str1+1,*(str1+1),str1[1]);


    printf("%s\n",str1);
    
    strcpy(str1,"Hi, I changed the string 1!");// "..." is stored in stack section of memory
    printf("%s\n",str1);



    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*      use * to define a string            */
    /*      char *a="  ";                    */

    char *str2="This is string 2!";
    printf("The size of str2 is: %d\n",sizeof(str2));
    //str2 and &str2 arent the same; 
    printf("str2:%d and &str2:%d\n",str2,&str2);
    //str2 can be used to %s
    printf("str2:%s\n",str2);//,*str2);
    printf("*str2:%c\n",*str2);
    printf("*(str+1):%c\n",*(str2+1));
    

}