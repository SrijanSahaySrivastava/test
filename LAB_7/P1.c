#include<stdio.h>

int main(){
    int x,y,num=1;
    scanf("%d%d", &x,&y);
    while(y--){
        num=num*x;
    }
    printf("%d", num);
}