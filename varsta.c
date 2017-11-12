#include <stdio.h>
    int main(){
    int a,z,l,n,v;
    printf("Introduceti data nasterii \n");
    scanf("%d %d %d",&z,&l,&a);
    printf("Introduceti anul curent \n");
    scanf("%d",&n);
        if(z>=11 && l>=7 ){
        v=n-a;
        printf("Pana la data de azi ati implinit %d",v);}
        else{
        v=n-a;
        printf("Pana la data de azi ati implinit %d",v);}
        return 0;
        if(z==11 && l==7){
        v=n-a;
        printf("Pana la data de azi ati implinit %d, apropo, La multi ani!",v);}
    }
