# include <stdio.h>
# include <stdlib.h>

int main(void)
{   
    //The C library function void *malloc(size_t size) allocates the requested memory and returns a pointer to it.
    unsigned int size=1024;
    char *ptr;
    ptr=malloc(size);
    printf("%d",ptr);

    //realloc(ptr,size)

    ptr=realloc(ptr,size*2);

    //calloc(n,objectSize)
    //allocate a buffer of objects
    //used to allocate memory for non-simple types
    //n is buffer size
    //objsize is the size of individual object size


    //free(ptr)  free the memory
}