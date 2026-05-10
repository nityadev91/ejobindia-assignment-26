#include<stdio.h>
#include<conio.h>

int main(){
    printf("Enter a number:");
    int n;
    scanf("%d", &n);
    int sum=0;
    int magic=0;
    while(n!=0){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);

    while(sum!=0){
        int r=sum%10;
        magic+=r;
        sum/=10;
    }
    if(magic==1){
        printf("Magic Number");
    }
    else{
        printf("Non-Magic Number");
    }
    return 0;
}