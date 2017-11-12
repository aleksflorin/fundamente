#include <iostream>
using namespace std;

int main(){
    unsigned int n,nr;
    do{
    cout<<"introdu un nr intre 1 si 31:";
    cin>>n;
    }while((n<1)||(n>31));
    nr=1<<n;
    cout<<"nr="<<nr<<endl;

    return 0;
}
