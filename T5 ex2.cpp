#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"introdu un nr:";
    cin>>n;

    if((n&1)==0)
        cout<<n<<" este par";
    else
        cout<<n<<" este impar";
    return 0;
}
