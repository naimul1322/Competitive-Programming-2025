/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e5+12;
int dp[mx][4],n;
int arr[mx][4];

int solve(int i,int f1)
{
    if(i>n) return 0;

    if(dp[i][f1]!=-1)return dp[i][f1];

    int res=0;
    for(int j=1; j<=3; j++)
    {
        if(j!=f1){
            res=max(res,arr[i][j]+solve(i+1,j));
        }
    }
    return dp[i][f1]=res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i][1]>>arr[i][2]>>arr[i][3];
    }
    cout<<solve(1,0)<<endl;



}

