/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    int a[n-1],f[n+1]={};
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    int ans;
    for(int i=1; i<=n; i++)
    {
        if(f[i]==0) ans=i;
    }
    cout<<ans<<endl;


}

