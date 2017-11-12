#include <iostream>
using namespace std;

int main(){
    int datorie,plata,n,x,y,z;

    cout<<"Clientul datoreaza bancii suma de:";
    cin>>datorie;
    cout<<"Clientul plateste suma de:";
    cin>>plata;

    n=plata-datorie;
    x=n/10;
    n=n-x*10;
    y=n/5;
    n=n-y*5;
    z=n;

    cout<<"Clientul avea datoria de "<<datorie<<" lei si a platit "<<plata<<" lei ,el va primi inapoi "<<x<<" bancnote de 10 lei, "<<y<<" bancnote de 5 lei si "<<z<<" bancnote de 1 leu"<<endl;

}
