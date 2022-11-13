#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Number of digits to input");
    scanf("%d", &n);
    int i=n;
        while(n--){
            int k;
            scanf("%d", &k);
            sum=sum+k;
        }
    printf("Sum = %d\naverage = %d", sum, sum/i);
}