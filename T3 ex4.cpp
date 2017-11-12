#include <iostream>
using namespace std;

int main(){
    int n,i,x,cmmdc,s,a,c;
    cout<<"Introdu numaru de numere:";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"introdu un numar:";
        cin>>x;
        a=x;
        if(i==0){
            s=x;
        }
        while(a!=s){
        if(a>s)
            a=a-s;
        else
            s=s-a;

        }
        s=x;
    }
