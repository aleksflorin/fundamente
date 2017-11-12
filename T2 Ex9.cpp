#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Introdu un numar:";
    cin>>a;
    cout<<"Introdu un numar:";
    cin>>b;
    cout<<"Introdu un numar:";
    cin>>c;

    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        cout<<a<<" si "<<b<<" si "<<c<<" sunt laturile unui triunghi dreptunghic"<<endl;
}
