#include <iostream>
using namespace std;

int main(){
    int n,c=0,i,v[10000],prime,j;


    cout<<"introdu un nr intreg:";
    cin>>n;


    for(i=0;i<n;i++){
        v[i]=i+1;
    }

    for(i=1;i<n;i++){
            if(v[i]!=0){
                prime=v[i];
        for(j=i+1;j<n;j++){
            if(v[j]%prime==0)
                v[j]=0;
        }
    }
    }

     for(i=1;i<n;i++){
        if(v[i]!=0)
            cout<<v[i]<<" ";
    }
    return 0;
}
