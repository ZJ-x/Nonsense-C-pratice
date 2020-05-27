# include <stdio.h>

int arr[5][5];

int getRandoms(int lower, int upper  ) 
{ 
    
    int num = (int) ((rand() % (upper - lower + 1)) + lower); 
    return num;
} 

void populateArray(int arr[5][5])
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=getRandoms(9,0);
        }
    }
}

void printfArrayElement(int arr[5][5])
{
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            //printf("Element at %d, %d is %d at address %p\n",i,j,arr[i][j],&arr[i][j]);
            printf("Element at %d, %d is %d at address %p\n",i,j,*(*arr+i*5+j),(*arr+i*5+j));
        }
    }
}

int main(void)
{
   populateArray(arr);
   printfArrayElement(arr);
}