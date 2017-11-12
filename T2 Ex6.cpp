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
        if(s%3==0)
            c++;
    }

    cout<<n<<" are "<<c<<" cifre divizibile cu 3."<<endl;
}
