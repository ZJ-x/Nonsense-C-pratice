# include <stdio.h>

int main(void){
    int arr1[10]={0};
    
    printf("The arr1 contains: \n");
    for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){
        printf("%d\n",arr2[i]);
    }

    printf("The arr2 contains: \n");
    int arr2[6]={[1]=90,[5]=2};
    for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
        printf("%d\n",arr2[i]);
    }


}