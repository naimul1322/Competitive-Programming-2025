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

     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n-i-1; j++)
         {
             if(a[j]>a[j+1])
             {

             swap(a[j],a[j+1]);
             }
         }
     }
     for(int i=0; i<n; i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;

}

