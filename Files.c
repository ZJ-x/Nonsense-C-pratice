# include <stdio.h>
// sytnax: File: *inFile, *outFile;

/*  open: inFile=fopen("fork .c","r");
          outFile=fopen("fork1.c","w");

    read: fscanf(inFile,"%c",&ch);
    fprintf(outFile,"%c",ch);
    
    close: fclose(inFile);
           fclose(outFile);