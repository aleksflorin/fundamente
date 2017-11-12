#include <iostream>
using namespace std;

int main(){
    //Acest program este facut sa ruleze doar in cazul in care avem un sir ordonat care apartine multimii N si va da doar primul numar care lipseste, daca lipseste .
    int n=0,v[100],x=1,i,j=0;
    while((n<=0)||(n>=100)){
        cout<<"introdu un n intre 1 si 100:";
        cin>>n;
    }
    for(i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];

    }
    for(i=0;i<n-1;i++){
        if(v[i]<v[i+1])
            j++;
        else
            i=n;
    }

        if(j>0)
            cout<<"lipseste "<<v[j]+1;
    return 0;
}
