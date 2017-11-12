#include <iostream>
using namespace std;

int main(){
    float n,s=0,i;
    cout<<"Introdu un numar:";
    cin>>n;

    for(i=1;i<=n;i++)
        s=s+i/(i+2);

    cout<<"suma este "<<s*(n+2)<<"/"<<n+2<<endl;
}
