/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n,q;
    cin>>n>>q;
    vector<int> v[n];
    for(int i=0; i<q; i++)
    {
        int tp;
        cin>>tp;
        if(tp==0)
        {
            int t,x;
            cin>>t>>x;
            v[t].push_back(x);
        }
        else if(tp==1)
        {
              int t;
              cin>>t;
            for(auto u: v[t])
            {
                cout<<u<<" ";
            }
            cout<<endl;
        }
        else
        {
            int t;
            cin>>t;
            v[t].clear();
        }

    }


}

