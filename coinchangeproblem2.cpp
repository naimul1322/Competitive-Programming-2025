/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int tc;
    cin>>tc;
    while(tc--)
    {

        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)cin>>v[i];

        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cnt+=(v[i]%2!=(i+1)%2);
        }
        cout << (cnt == 0 || cnt == n? "YES" : "NO") << endl;

    }

}

