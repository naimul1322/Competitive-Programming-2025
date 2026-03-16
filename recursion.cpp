/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
long long dp[mx];

long long fact(int n)
{
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1)return dp[n];
    dp[n]=n*fact(n-1);
    return dp[n]%MOD;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fact(n)<<endl;



}

