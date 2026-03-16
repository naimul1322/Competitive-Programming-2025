/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e7+12;
vector<int>  d[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim=10;
    for(int i=1; i<=lim; i++)
    {
        for(int j=i; j<=lim; j+=i)
        {
            d[j].push_back(i);
        }
    }
    for(int i=1; i<=lim; i++)
    {
        cout<<i<<" : ";
        for(auto u: d[i])
        {
            cout<<u<<" ";

        }
        cout<<endl;
    }

}
