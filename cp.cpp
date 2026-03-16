/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    long long n,k,a;
    cin>>n>>k>>a;
    long long ans=(n*k)/a;
    double x=(double)(n*k)/a;
    if(ans<100000000) cout<<"int"<<endl;
    else cout<<"long long"<<endl;
    //cout<<"double"<<endl;



}

