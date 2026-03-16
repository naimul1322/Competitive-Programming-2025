/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        long long a=min(l,r);
        long long b=max(l,r);
        long long sum=(b-a+1)*(a+b)/2;
        cout<<sum<<endl;
    }


}

