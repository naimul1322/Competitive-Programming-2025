/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=2e5+123;
int a[mx];
long long sum[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<< sum[r]-sum[l-1]<<endl;
    }


}

