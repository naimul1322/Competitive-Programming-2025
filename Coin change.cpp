/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=3e4+12;
int coin[]={1,5,10,25,50};

long long dp[6][mx];

long long solve(int i,int n)
{
    if(i==5 || n==0) return (n==0);
    if(dp[i][n]!=-1)return dp[i][n];
    long long res=0;
    for(int j=0; j<=n; j++)
    {
        if(n-(j*coin[i])>=0)
        {
            res+=solve(i+1,n-(j*coin[i]));
        }
        else break;
    }
    return dp[i][n]=res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    while(cin>>n)
    {
       memset(dp,-1,sizeof(dp));
       long long k=solve(0,n);
       if(k==1)cout<<"There are "<<k<<" ways to produce "<<n<<" cents change."<<endl;
       else cout<<"There are "<<k<<" ways to produce "<<n<<" cents change."<<endl;
    }



}

