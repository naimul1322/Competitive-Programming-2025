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
     int n=15;
     int snod=0;
     for(int k=1; k<=n; k++)
     {
         int cnt=n/k;
         cout<<k<<" : "<<cnt<<endl;
         snod+=cnt;
     }
     cout<<snod<<endl;

}

