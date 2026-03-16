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
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int n,x;
     cin>>n>>x;
     for(int i=1; i<=n; i++) cin>>a[i];

     for(int i=1; i<=n; i++)
     {
         sum[i]=sum[i-1]+a[i];
     }

     long long ans=0;
     map<long long,int> cnt;
     cnt[0]=1;
     for(int i=1; i<=n; i++)
     {
         long long val=sum[i]-x;
         ans+=cnt[val];
         cnt[sum[i]]++;
     }
     cout<<ans<<endl;

}
