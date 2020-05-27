# include <stdio.h>
# include <stdlib.h>

//declare a pointer of type file for communication between the file and the program
FILE *fptr;
/*  sytnax for intialize the pointer  -> fptr=fopen("fileopen","mode");
                        |   exist                     | not exist 
    modes:  'r': reading    -                           Null
            'w": writing   overwrite                    create new file
            'a': append    _                            create new file
            'r+':reading    new data at beginning       create new file
                 writing     overwrite
            'w+':writing    overwrite                   create new file
                 reading
            'a+':reading   new data is appended at end  create new file
                 appending   */


// i/o  fprintf(), fscanf(),fgetchar(),fputc()
// always close file , fclose()

int main(void)
{   
    //reading file
    char num[120];
    fptr=fopen("ForTest.txt","w");

    if(fptr==NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    else
    {
        fprintf(fptr, "This is testing for fprintf...\n");
        fputs("This is testing for fputs...\n", fptr);
    }
    
    fclose(fptr);




    //reading file

    if((fptr=fopen("ForTest.txt","r"))==NULL)
    {
        printf("There is no such file!\n");
        exit(1);
    }
    else
    {   //it will stop when encounter the first space
        //fscanf(fptr,"%s",&num);

        // sytnax fgets(toStore, numberofChar read,fptr);

        fgets(num,120,fptr);
    }
    printf("%s",num);
    fclose(fptr);
    return 0;
}