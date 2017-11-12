#include <iostream>
using namespace std;

int main(){

    int a,l,z,o;
    cout<<"Introdu un numar de ani:";
    cin>>a;
    l=a*12;
    z=a*365;
    o=z*24;

    cout<<a<<"de ani este egal cu "<<l<<" luni,"<<z<<" zile,"<<o<<" ore."<<endl;

    return 0;
}
