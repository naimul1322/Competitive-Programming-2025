/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e4+12;
map<string,vector<string>>adj;
map<string,int>lev;
map<string,string>par;


void bfs(string s)
{
    lev.clear();
    lev[s]=1;
    queue<string >q;
    q.push(s);
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(lev[v]==0)
            {
                lev[v]=lev[u]+1;
                par[v]=u;
                q.push(v);
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
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            string  u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s,t;
        cin>>s>>t;
        bfs(s);
        vector<pair<string,string>>ans;

        while(!par[t].empty())
        {
           ans.push_back({par[t],t});
           t=par[t];
        }
        reverse(all(ans));
    }

}

