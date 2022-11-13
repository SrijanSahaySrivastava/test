#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d", &n);
    while(n){
        sum=sum+n;
        n--;
    }
    printf("%d", sum);
}