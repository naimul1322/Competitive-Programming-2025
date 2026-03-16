/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int n,m;
     cin>>n>>m;
     long long a[n+1][m+1];
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             cin>>a[i][j];
         }
     }
     for(int i=0; i<n; i++)
     {
         for(int j=m-1; j>=0; j--)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }

}

