#include <stdio.h>

int main(){
    int a,l,z;
    do{
    printf("introdu anul:");
    scanf("%d",&a);
    printf("introdu luna:");
    scanf("%d",&l);
    printf("introdu ziua:");
    scanf("%d",&z);
    }while((l<1)||(l>12)||(z>31)||(z<0));//Ne asiguram ca datele introduse sunt corecte
    if(l>7){//Verificam daca ne aflam peste luna iulie
        if((l==12)&&(z==31)){//Daca luna este decembrie si ziua 31 vom trece in alt an(il tratam primu pentru ca este caz special)
            a++;
            l=1;
            z=1;
        }else if(l%2==0){//Daca luna este para si ziua este 31 vom trece in alta luna daca nu vom trece doar in alta zi
            if(z==31){
                z=1;
                l++;

            }else
                z++;

        }else{//Daca luna nu este para si ziua este 30 vom trece in alta luna daca nu vom trece doar in alta zi
            if(z==30){
                z=1;
                l++;
            }else
                z++;
        }

    }else if(l<=7){//Verificam daca ne aflam in lunile inainte de august
        if(l==2){//Daca luna este februarie (o tratam prima pentru ca este caz special in care avem doar 28 de zile) si daca ziua este 28 vom trece intr-o luna noua daca nu vom trece doar in alta zi
            if(z==28){
                l++;
                z=1;
            }else
                z++;
        }else if(l%2==0){//Daca luna este para si nu este februarie si ziua este 30 vom trece in alta luna daca nu vom trece doar in alta zi
            if(z==30){
                l++;
                z=1;
            }else
                z++;
        }else{//(Daca luna nu este para este impara )  daca ziua este 31 atunci vom trece intr-o alta luna daca nu atunci vom trece doar in alta zi
            if(z==31){
                l++;
                z=1;
            }else
                z++;
        }
    }

    printf("Noua data este:%d %d %d",a,l,z);//Printam noua data
}
