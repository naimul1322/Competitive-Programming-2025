/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=2e5+12;
int h[mx],n,k;
int dp[mx];

int solve(int i)
{
    if(i==n)return 0;
    if(dp[i]!=-1)return dp[i];
    int res=INT_MAX;
    for(int j=1; j<=k; j++)
    {
         if(i+j<=n)res=min(res,abs(h[i]-h[i+j])+solve(i+j));
    }
    return dp[i]=res;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    cin>>n>>k;
    for(int i=1; i<=n; i++)cin>>h[i];
    memset(dp,-1,sizeof(dp));
    cout<<solve(1)<<endl;


}

