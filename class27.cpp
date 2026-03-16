/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e3+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
         bool ans=false;
          for(int i=0; i<n; i++) cin>>a[i];
          sort(a,a+n);

          for(int i=1; i<=n; i++)
          {
              if(abs(a[i]-a[i-1])==0)
              {
                  ans=true;
                  break;
              }
          }
          if(ans) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
     }

}

