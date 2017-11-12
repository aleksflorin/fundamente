#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Introdu un an:";
    cin>>a;

    if((a%400==0)||(a%4==0)&&(a%100!=0))
        cout<<a<<" este an bisect"<<endl;
    else
        cout<<a<<" nu este an bisect"<<endl;

}
