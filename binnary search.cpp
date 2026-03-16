/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int n,q;
     cin>>n>>q;
     for(int i=0; i<n; i++) cin>>a[i];
     while(q--)
     {
         int x;
         cin>>x;
         int l=0,r=n-1;
         int ans=-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(a[mid]==x)
             {
                 ans=mid;
                 break;
             }
             else if(a[mid]<x)
             {
                 l=mid+1;
             }
             else {
                r=mid-1;
             }
         }
         cout<<ans<<endl;
     }


}
