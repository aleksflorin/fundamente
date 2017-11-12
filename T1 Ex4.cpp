#include <iostream>
using namespace std;

int main(){

    int a,c=0,b=50;
    cout<<"Introdu un numar:";
    cin>>a;
    if(a<100){
        while(b!=a){
                if (b<a){
                    b++;
                    c++;
                }
                else{
                    b--;
                    c++;
                }

       }
    }

    cout<<b<<" este numaru introdus ? "<<c<<" incercari"<<endl;
}
