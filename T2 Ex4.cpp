#include <iostream>
using namespace std;

int main(){
    int n,a,x,i=0,c=0;
    int v[12]={31,27,31,30,31,30,31,31,30,31,30,31};
    string l[12]={" ianuarie "," februarie "," martie "," aprilie"," mai "," iunie "," iulie "," august "," septembrie "," octombrie "," noiembrie "," decembrie "};
    cout<<"Introdu un an:";
    cin>>a;
    cout<<"Si un numar de zile:";
    cin>>x;
    if((a%400==0)||(a%4==0)&&(a%100!=0))
        v[1]=28;
    if(x<=366){
            if(x<=v[i]){
                n=x;
                cout<<n<<l[c]<<a;
            }else{
                while(x>v[i]){
                x=x-v[i];
                i++;
                n=x;
                c++;

                }
            cout<<n<<l[c]<<a;
            }


    }else
        cout<<"Anul nu are atatea zile"<<endl;
    return 0;

}
