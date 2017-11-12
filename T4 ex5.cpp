#include <iostream>
using namespace std;

int main(){
    int n=0,i,d3=0,p=0,im=0,v[100];
    while((n<=0)||(n>100)){
        cout<<"introdu un n intre 1 si 100:";
        cin>>n;
    }
    for(i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
        if(v[i]%3==0)
         d3++;
         if(v[i]%2==0)
            p++;
         else
            im++;

    }
    cout<<"In vectorul de mai sus sunt "<<d3<<" nr divizibile cu 3, "<<p<<" nr pare si "<<im <<" nr impare "<<endl;

    return 0;
}
