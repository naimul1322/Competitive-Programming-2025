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
         int lo=-1;
         int l=0, r=n-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(a[mid]>=x)
             {
                 lo=mid;
                 r=mid-1;
             }
             else
             {
                 l=mid+1;
             }
             if(lo==-1) lo=n;

         }
            cout<<lo<<endl;
     }

}

