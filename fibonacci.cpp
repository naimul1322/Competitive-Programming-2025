/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
long long dp[mx];

long long fibo(int n)
{
    if(n==0 || n==1) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;




}

