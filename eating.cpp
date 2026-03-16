/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    long long a,b,k;
    cin>>a>>b>>k;
    if(k<=a)
    {
        cout<<k-a<<" "<<b<<endl;
    }
    else
    {
        k=k-a;
        if(k<=b)
        {
            cout<<0<<" "<<b-k<<endl;

        }
        else cout<<0<<" "<<0<<endl;
    }


}

