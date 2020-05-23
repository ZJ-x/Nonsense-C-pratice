#include <stdio.h> 

int NumOfRows,NumOfCols;

int main (void){
    printf("Please enter the the number of the rows and cols: ");
    scanf("%d %d",&NumOfRows,&NumOfCols);
    int Matrix[NumOfRows][NumOfCols];
    for(int i=0;i<NumOfRows;i++){
        for (int j=0;j<NumOfCols;j++){
            Matrix[i][j]=0;
        }
    }
    printf("The length of the Matrix is : %d",sizeof(Matrix));
    for(int i=0;i<NumOfRows;i++){
        printf("\n");
        for (int j=0;j<NumOfCols;j++){
            printf("%d",Matrix[i][j]);
        }
    }

}

void Print2DArray(int * toPrint[]){
    int rows=sizeof(toPrint),cols;
}

