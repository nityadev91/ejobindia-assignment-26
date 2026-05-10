#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum=0;
    int temp=n;
    while(temp!=0){
        int r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Non-Armstrong Number");
    }
    return 0;

}