#include<stdio.h>

int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            printf("%d is not prime",n);
            c++;
            break;
        }
    }
    if (c==0)
    {
        printf("%d is prime", n);
    }
    
}