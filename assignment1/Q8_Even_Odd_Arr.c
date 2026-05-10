#include<stdio.h>
#include<conio.h>

int main(){
    int arr[]={2,3,4,5,1,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr_even[10];
    int arr_odd[10];
    int len_even=-1;
    int len_odd=-1;
    int even_sum=0;
    int odd_sum=0;

    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            arr_even[++len_even]=arr[i];
            even_sum+=arr[i];
        }
        else{
            arr_odd[++len_odd]=arr[i];
            odd_sum+=arr[i];
        }
    }

    printf("Even numbers are: ");
    for(int j=0;j<=len_even;j++){
        printf("%d ", arr_even[j]);
    }

    printf("\nOdd numbers are: ");
    for(int k=0;k<=len_odd;k++){
        printf("%d ", arr_odd[k]);
    }

    printf("\nSum of even numbers is: %d", even_sum);
    printf("\nSum of odd numbers is: %d", odd_sum);
    printf("\nAverage of even numbers is: %.2f", (float)even_sum/(len_even+1));
    printf("\nAverage of odd numbers is: %.2f", (float)odd_sum/(len_odd+1));

    return 0;
}