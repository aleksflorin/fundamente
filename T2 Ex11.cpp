#include <iostream>
using namespace std;

int main(){
    int z,l,a,zc,lc,ac,v,c=0;
    cout<<"Introdu anul de nastere:";
    cin>>a;
    cout<<"Introdu luna de nastere:";
    cin>>l;
    cout<<"Introdu ziua de nastere:";
    cin>>z;
    cout<<"Introdu anul curent:";
    cin>>ac;
    cout<<"Introdu luna curenta:";
    cin>>lc;
    cout<<"Introdu ziua curenta:";
    cin>>zc;


    if((l<=12)&&(lc<=12)&&(z<=31)&&(zc<=31)){
    if(l<=lc){
        if(z<=zc){
        cout<<"etc";
        c=1;
        }
    }
    v=(ac-a)+c;

    cout<<"varsta persoanei este "<<v<<" de ani."<<endl;
    }else{
        cout<<"Ai introdus niste date incorecte luna trebuie sa aiba mai putin de 31 de zile si anul mai putin de 12 luni"<<endl;
    }
}
