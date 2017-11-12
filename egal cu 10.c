#include <stdio.h>
#include <stdlib.h>
int main(){
        int a,b;
        printf ("introduceti doua numere, a si b, cu space intre ele");
        scanf("%d %d",&a,&b);
        if(a==10)
            printf("a=10  \n");
            else
            printf("a nu este egal cu 10 \n");
        if (b==10)
            printf("b=10");
            else
            printf("b nu este egal cu 10 \n");
        if(a != 10 && b !=10)
            printf("nici a, nici b nu sunt egale cu 10 \n");


  system("pause");
  return 0;
}
