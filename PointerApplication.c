# include <stdio.h>


void minMax(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++){
        if (*min>arr[i]){
            *min=arr[i];
        }

        if (*max<arr[i]){
            *max=arr[i];
        }
    }
}

int main(void){
    int a[]={23,4,21,98,987,45,32,10,123,986,50,3,4,5};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum value in the array is: %d and Maximum value is: %d",min,max);
    return 0;
}