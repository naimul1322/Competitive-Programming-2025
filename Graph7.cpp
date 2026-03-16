/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=2e4+12;
bool vis[mx];
vector<int>adj[mx];
int cnt,cnt1;

void dfs(int u,int col)
{
    vis[u]=1;
    if(col==1)cnt1++;
    cnt++;

    int tmp;
    if(col==1)tmp=2;
    else tmp=1;
    for(auto p: adj[u])
    {
        if(vis[p]==0)
        {
            dfs(p,tmp);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }



}

