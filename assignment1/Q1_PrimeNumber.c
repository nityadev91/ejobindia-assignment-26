#include<stdio.h>
#include<conio.h>

int main(){
    printf("Enter a number:");
    int n;
    scanf("%d", &n);

    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        printf("Prime Number"); 
    }
    else{
        printf("Non-prime Number");
    }
    return 0; 
} 