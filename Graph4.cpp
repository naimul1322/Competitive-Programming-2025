/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e5+12;
vector<pair<int,int>>adj[mx];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    for(int i=1; i<=n; i++)
    {
        cout<<"Adjacent List of "<<i<<" : ";
        for(auto u: adj[i])
        {
            cout<<"Node: "<<u.first<<" Cost: "<<u.second<<" ";
        }
        cout<<endl;
    }



}

