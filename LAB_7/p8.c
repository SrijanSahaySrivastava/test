#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        if(n%i==0) sum=sum+i;
    }
    (sum==n)?printf("%d is a perfect number", n):printf("%d is not a perfect number", n);
}