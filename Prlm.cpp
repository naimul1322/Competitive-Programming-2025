/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=0)
        {
            ans.push_back(v[i]);
        }
    }
//    while(ans.size()<v.size())
//    {
//        ans.push_back(0);
//    }

    for(auto u: ans)
    {
        cout<<u<<" ";
    }
    cout<<endl;


}
