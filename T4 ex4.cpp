#include <iostream>
using namespace std;

int main(){
    int n=0,i,s=0,v[100];
    while((n<=0)||(n>100)){
        cout<<"introdu un n intre 1 si 100:";
        cin>>n;
    }
    for(i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
        if(i%3==0)
        s=s+v[i];
    }

    cout<<"suma numerelor de pe pozitiile de forma 3k+1 este egala cu "<<s;
    return 0;
}
