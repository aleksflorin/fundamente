#include <iostream>
using namespace std;

int main(){
    int i;
    double v[25],n,mg=0,promovat=0,nepromovat=0,s1=0,s2=0,s3=0;
        cout<<"Nota stundetului este intre 0 si 10"<<endl;
        for(i=0;i<25;i++){
        cout<<"studentu["<<i<<"]=";
        cin>>v[i];
        while((v[i]<0)||(v[i]>10)){
        cout<<"studentu["<<i<<"]=";
        cin>>v[i];
        }
        mg=mg+v[i];
        if(v[i]>=5){
            promovat++;
            if((v[i]>=5)&&(v[i]<=6))
                s1++;
            else if ((v[i]>=7)&&(v[i]<=8))
                s2++;
            else
                s3++;
        }
            nepromovat=25-promovat;

        }
       cout<<"In grupa de 25 de elevi  sunt "<<promovat<<" de elevi promovati si "<<nepromovat <<" elevi nepromovati.Media generala este "<<mg/25<<endl
           <<"Dintre cei promovati "<<s1*4<<"% au media intre 5 si 6, "<<s2*4<<"% au media intre 7 si 8, "<<s3*4<<"% au media intre 9 si 10"<<endl;
    return 0;
}
