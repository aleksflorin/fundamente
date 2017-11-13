#include <iostream>
using namespace std;

int main(){
    int z,l,a,zc,lc,ac,v,c=0;
    cout<<"Introdu anul nasterii:";
    cin>>a;
    cout<<"Introdu luna nasterii:";
    cin>>l;
    cout<<"Introdu ziua nasterii:";
    cin>>z;
    cout<<"Introdu anul curent:";
    cin>>ac;
    cout<<"Introdu luna curenta:";
    cin>>lc;
    cout<<"Introdu ziua curenta:";
    cin>>zc;

    if((a<ac)||((a==ac)&&((l<lc)||((lc=l)&&(z<zc)))){
    if((l<=12)&&(lc<=12)&&(z<=31)&&(zc<=31)){
    if(l<=lc){
        if(z<=zc){
        c=1;
        }
    }
    v=(ac-a)+c;

    cout<<"varsta persoanei este "<<v<<" de ani."<<endl;
    }else{
        cout<<"Ai introdus niste date incorecte luna trebuie sa aiba mai putin de 31 de zile si anul mai putin de 12 luni"<<endl;
    }
    }else
       cout<<"Data nasterii nu poate fii peste data curenta"<<endl;
}
