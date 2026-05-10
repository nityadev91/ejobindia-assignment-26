#include<stdio.h>
#include<conio.h>

int main(){
    printf("Enter a number:");
    int n;
    scanf("%d", &n);
    int pal=0;
    int temp=n;

    while(temp!=0){
        int r=temp%10;
        pal=pal*10+r;
        temp/=10;
    }
    if(pal==n){
        printf("Palindrome Number");
    }
    else{
        printf("Non-Palindrome Number");
    }
    return 0;
}