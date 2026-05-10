#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int fact=1;
    for(int i=n;i>1;i--){
        fact*=i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}