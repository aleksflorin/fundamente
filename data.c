#include <stdio.h>
    int main(){
    int a,l,z;
    printf("Introdu data curenta de format (zz/ll/aa) ");
    scanf("%d %d %d",&z,&l,&a);

    if(l==12 && z==31){
        z=1;
        a++;
        l=1;
        printf("Maine va fi %d %d %d ",z,l,a);
        }
        else    if(z<31 && l< 12){
        z++;
        printf("Maine va fi %d %d %d ",z,l,a);
        }
        else {
            z=1;
            l++;
            printf("Maine va fi %d %d %d ",z,l,a);}
    system("PAUSE");
    }
