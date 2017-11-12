#include <iostream>
using namespace std;

int main(){
    int n,s[32],i=0,j;
    cout<<"introdu un nr:";
    cin>>n;
    do{
        if((n&1)==0){
            s[i]=0;
            i++;

        }else{
           s[i]=1;
           i++;
        }
        n=n>>1;
    }while(n);

    for(j=i-1;j>=0;j--)
        cout<<s[j];

    return 0;
}
