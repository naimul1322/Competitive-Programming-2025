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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> f(n);
        for (int i = 0; i < n; i++) cin >> f[i];
        vector<long long> v(n);
        for (int i = 1; i < n - 1; i++)
        {
            v[i] = (f[i+1] - 2 * f[i] + f[i-1]) / 2;
        }
        long long sum_f0 = 0, sum_fn = 0;
        for (int i = 1; i < n - 1; i++)
        {
            sum_f0 += v[i] * i;
            sum_fn += v[i] * (n - 1 - i);
        }
        v[n-1] = (f[0] - sum_f0) / (n - 1);
        v[0] = (f[n-1] - sum_fn) / (n - 1);
        for (int i = 0; i < n; i++)
        {
           cout<<v[i]<<" ";
        }
        cout<<endl;

    }

}

