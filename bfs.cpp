/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e4+12;
vector<int> adj[mx];
int lev[mx];

void bfs(int s)
{
    memset(lev,-1,sizeof(lev));
    lev[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(auto p: adj[u])
        {
            if(lev[p]==-1)
            {
                lev[p]=lev[u]+1;
                q.push(p);
            }
        }
    }

}



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
        for(int i=0; i<mx; i++)
        {
            adj[i].clear();
        }
        int n,m;
        cin>>n>>m;
        for(int i=1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1);
        cout<<lev[n]<<endl;
    }


}
