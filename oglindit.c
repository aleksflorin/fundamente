#include <stdio.h>
    int main(){
        int n,i=0,j,p=0,v[100];
        printf("Introdu numarul pe care vrei sa-l oglindesti ");
        scanf("%d",&n);
        while(n != 0){
            v[i]=n%10;
            n=n/10;
            printf("n= %d v= %d",n);
            i++;
            }
        for(j=0;j<i;j++){
            p=p*10+v[j];
            printf("p= %d",p);}
        printf("%d",p);
        return 0;






    }
