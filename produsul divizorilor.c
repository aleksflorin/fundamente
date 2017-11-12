#include <stdio.h>
    int main(){
        int s,p=1,n,i;
        printf("Introdu numarul: ");
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            if(n%i==0){
                p*=i;
            }

        }

    printf("Produsul divizorilor este %d.", p);
    return 0;
    }
