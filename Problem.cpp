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
        long long s, x;
        cin >> n >> s >> x;
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            long long a;
            cin >> a;
            sum += a;
        }
        if (s >= sum && (s - sum) % x == 0) cout << "YES"<<endl;
        else cout << "NO"<<endl;


    }


}

