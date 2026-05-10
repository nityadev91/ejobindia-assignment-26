#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10]={9,4,3,5,2,9,8,7,4,10};
    int len=sizeof(arr)/sizeof(arr[0]);

    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<len;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        else if(arr[i]<=min){
            min=arr[i];
        }
    }

    printf("Minimum element in array is %d\n", min);
    printf("Maximum element in array is %d\n", max);
    
    return 0;
}