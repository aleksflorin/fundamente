#include <iostream>
using namespace std;

int main(){
    int n,v[100],i,x,m,m2,p,nr;

    cout<<"introdu un n mai mare ca 0 si mai mic sau egal ca 100:";
    cin>>n;

    if((n>0)&&(n<=100)){
        cout<<"introdu un x:";
        cin>>x;
        for(i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
        }
       for(i=0;i<n-1;i++){
        m=x-v[i];
        m2=x-v[i+1];
       if(m<0)
            m=m*(-1);
       if(m2<0)
            m2=m2*(-1);
       if(m>m2){
        p=i+2;
        nr=v[i+1];
       }else{
        p=i+1;
        nr=v[i];
       }

    }
    }else{
        cout<<"n nu este mai mare ca 0 si mai mic sau egal cu 100!";
    }

    cout<<"nr cel mai apropiat de x este "<<nr<<" si se afla pe pozitia "<<p<<endl;
    return 0;
}
