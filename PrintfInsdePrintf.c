#include <stdio.h>

int main(void){
    printf("%d",printf("%s","Hello world!"));
    //print string first then print string's length

    //printf will return the length of it printed

    printf("%10s","Hello\n");
    //it will fill up to length of 10, leave left hand with space

    char c=255;
    c=c+10;
    printf("%d",c);
    // char can store 1 byte which is 8 bits ,0-255;

}