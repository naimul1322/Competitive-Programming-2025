/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(2);
    int tc;
    cin>>tc;
    int scoelho=0;
        int srato=0;
        int ssapo=0;
    while(tc--)
    {
        int a;
        char ch;
        cin>>a>>ch;

        if(ch=='C') scoelho+=a;
        else if(ch=='R') srato+=a;
        else if(ch=='S') ssapo+=a;
    }
    int sum=scoelho+srato+ssapo;
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<scoelho<<endl;
    cout<<"Total de ratos: "<<srato<<endl;
    cout<<"Total de sapos: " <<ssapo<<endl;
    double pcoelhos= (double)scoelho/sum*100;
    double pratos= (double)srato/sum*100;
    double psapos=(double)ssapo/sum*100;
    cout<<"Percentual de coelhos: "<<pcoelhos<<" "<<"%"<<endl;
    cout<<"Percentual de ratos: "<<pratos<<" "<<"%"<<endl;
    cout<<"Percentual de sapos: "<<psapos<<" "<<"%"<<endl;


}

