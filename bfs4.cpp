/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e4+12;
vector<int>adj[mx];
int lev[mx];

void bfs(int s)
{
    lev[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(auto v: adj[u])
        {
            if(lev[v]==-1)
            {
                lev[v]=lev[u]+1;
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




}

