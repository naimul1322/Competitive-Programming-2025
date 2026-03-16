/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int n;
     cin>>n;
     int a[n+1];
     for(int i=0; i<n; i++) cin>>a[i];

     int csum=0;
     int mx=INT_MIN;
     for(int i=0; i<n; i++)
     {
         csum+=a[i];
         mx=max(csum,mx);
         if(csum<0)
         {
             csum=0;
         }
     }
     cout<<mx<<endl;

}

