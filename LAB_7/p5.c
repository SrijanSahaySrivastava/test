#include<stdio.h>

int main(){
    int n,a,pali=0;
    scanf("%d", &n);
    int og=n;
    while(n>=1){
        a=n%10;
        pali=pali*10+a;
        n/=10;
    }
    (pali == og)?printf("%d is a palindrome", og):printf("%d is a not palindrome", og);
}