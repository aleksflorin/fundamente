#include <stdio.h>
// 1+3+5+7+9
    int main(){
        int s,n,an,a1=1,r=2;
        printf("Introdu ultimul numar al sirului: ");
        scanf("%d", &n);
        s=a1*n+r*(n*(n-1))/2;
        printf("Suma primilor n termeni este: %d ",s);
    return 0;


    }
