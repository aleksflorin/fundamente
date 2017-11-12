#include <iostream>
using namespace std;

int main(){
    int n,i,s=0;
    cout<<"Introdu un numar natural: ";
    cin>>n;

    for(i=1;i<=n;i++)
        if(n%i==0)
            s=s+i;
    cout<<"Suma divizorilor="<<s<<endl;
}
