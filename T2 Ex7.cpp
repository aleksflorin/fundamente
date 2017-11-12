#include <iostream>
using namespace std;

int main(){
    int n,nr,s,c=0;

    cout<<"Introdu un numar:";
    cin>>n;
    nr=n;
    while(nr!=0){
        s=nr%10;
        nr=nr-nr%10;
        nr=nr/10;
        c=c*10+s;
    }

    if(n==c)
        cout<<n<<" == "<<c<<" deci numarul "<<n<<" este palindorm"<<endl;
    else
        cout<<n<<" != "<<c<<" deci numarul "<<n<<" nu este palindorm"<<endl;
}
