#include<stdio.h>

int main(){
    int n,c,a;
    scanf("%d", &n);
        for(c=1;n>1;c++){
            a=n%10;
            n=n/10;
        }
    printf("%d", c);
}