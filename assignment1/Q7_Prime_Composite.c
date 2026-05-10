#include<stdio.h>
#include<conio.h>

int main(){
    int arr[]={2,3,4,5,1,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr_prime[10];
    int arr_composite[10];
    int len_prime=-1;
    int len_composite=-1;

    for(int i=0;i<len;i++){
        int flag=0;
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            arr_prime[++len_prime]=arr[i];
        }
        else{
            arr_composite[++len_composite]=arr[i];
        }
    }

    printf("Prime numbers are: ");
    for(int j=0;j<len_prime;j++){
        printf("%d ", arr_prime[j]);
    }

    printf("\nComposite numbers are: ");
    for(int k=0;k<len_composite;k++){
        printf("%d ", arr_composite[k]);
    }
    return 0;
}