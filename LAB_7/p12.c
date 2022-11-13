#include<stdio.h>

int main(){
    int n,a,fact=1,sum=0;
    scanf("%d",&n);
    int b=n;
    while(n>=1){
        a=n%10;
        while(a){
            fact=fact*a;
            a--;
        }
        n=n/10;
        sum=sum+fact;
    }
    (sum == b)?printf("%d is strong number",b):printf("%d is not strong number", b);
}