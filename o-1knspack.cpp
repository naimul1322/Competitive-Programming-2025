/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
long long dp[123][mx];

int p[123],w[123];
int sz,n;

long long solve(int i, int curw)
{
    if(i>n)return 0;
    if(dp[i][curw]!=-1)return dp[i][curw];

    long long ret1=0,ret2=0;

    if(w[i]+curw<=sz) ret1=p[i]+solve(i+1,w[i]+curw);
    ret2=solve(i+1,curw);
    return dp[i][curw]=max(ret1,ret2);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    memset(dp,-1,sizeof(dp));
    cin>>n>>sz;
    for(int i=1; i<=n; i++)
    {
        cin>>w[i]>>p[i];
    }
    cout<<solve(1,0)<<endl;



}

