#include<stdio.h>

int main(){
    int n,a,sum=0;
    scanf("%d", &n);
    while(n>=1){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d", sum);
}