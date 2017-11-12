#include <iostream>
using namespace std;

int main(){
    int n,i,s=0;
    cout<<"Introdu un numar natural: ";
    cin>>n;

    for(i=0;i<n;i++)
        s=s+2*i+1;
    cout<<"Suma="<<s<<endl;
}
