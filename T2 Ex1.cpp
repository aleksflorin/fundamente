#include <iostream>
using namespace std;

int main(){
    int n,o,m,s,x;
    cout<<"Introdu un numar de secunde:";
    cin>>n;
    x=n;
    o=x/3600;
    x=x-o*3600;
    m=x/60;
    x=x-m*60;
    s=x;

    cout<<n<<" secunde="<<o<<" ore,"<<m<<" minute si "<<s<<" secunde"<<endl;
}
