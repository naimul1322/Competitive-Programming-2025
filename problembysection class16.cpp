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
     int tc;
     cin>>tc;
     while(tc--)
     {
         int x;
         cin>>x;
         int cnt=0;
         for(int i=1; i<=x; i++)
         {
             if(x%i==0)
             {
                 cnt++;
             }
         }
         cout<<cnt<<endl;
     }

}
