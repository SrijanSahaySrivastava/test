#include<stdio.h>
int main(){
    
    //Don't you say 'srijan ne nahi bataya' srishti... >:(
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0, j=0;
    scanf("%d", &n);
    while(n){
        switch (n)
        {
        case 1:
            n-=1;
            a++;
            break;
        case 2 ... 4:
            n-=2;
            b++;
            break;
        case 5 ... 9:
            n-=5;
            c++;
            break;
        
        case 10 ... 19:
            n-=10;
            d++;
            break;
        
        case 20 ... 49:
            n-=20;
            e++;
            break;
        
        
        case 50 ... 99:
            n-=50;
            f++;
            break;
        
        
        case 100 ... 199:
            n-=100;
            g++;
            break;

        
        case 200 ... 499:
            n-=200;
            h++;
            break;
         
        
        case 500 ... 1999:
            n-=500;
            i++;
            break;
        
        default:
            n-=2000;
            j++;
            break;
        }
    }
    printf("%d = 1 \n%d = 2 \n%d = 5 \n%d = 10 \n%d = 20 \n%d = 50 \n%d = 100 \n%d = 200 \n%d = 500 \n%d = 2000", a, b, c, d, e, f, g, h, i, j);
    //I'm Sowwy :P
    return 0;
}