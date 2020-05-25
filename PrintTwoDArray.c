# include <stdio.h>

int a[3][3]={1,2,3,4,5,6,7,8,9};

// int printWithPointer(int toPrint, int numRow, int numCol)
// {   
   
//     for(p=toPrint;p<=&toPrint[numRow-1][numCol-1];p++)
//     {
//         printf("%d", *p);
//     }
// }

int printWithIndex(int toPrint[][3], int numRow, int numCol)
{
    for(int i=0;i<numRow;i++)
    {   
        printf("\n");
        for(int j=0;j<numCol;j++)
        {
            printf("%d ",toPrint[i][j]);
        }
    }
    return 0;
}

int main(void){
    printWithIndex(a,3,3);
}