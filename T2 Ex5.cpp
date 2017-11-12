#include <iostream>
using namespace std;

int main(){
    int n,nr,s=0;

    cout<<"Introdu un numar:";
    cin>>n;
    nr=n;
    while(nr!=0){
        nr=nr-nr%10;
        nr=nr/10;
        s++;
    }

    cout<<n<<" are "<<s<<" cifre."<<endl;
}
