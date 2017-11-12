#include <iostream>
using namespace std;
int main(){
    int n,i,ok=1,x[100];
    cout<<"introdu un n:";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        if(i>0){
            if(x[i-1]>x[i])
                ok=0;
        }
    }

    if(ok)
        cout<<"Sirul este aranjat in ordine crescatoare"<<endl;
    else
        cout<<"Sirul nu este aranjat in ordine crescatoare"<<endl;
    return 0;
}
