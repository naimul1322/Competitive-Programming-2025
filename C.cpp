/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

vector<vector<int>> adj(7);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i != j && i + j != 7) {
                adj[i].push_back(j);
            }
        }
    }
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> dp(7, 1e9);

        for (int v = 1; v <= 6; v++) {
            dp[v] = (a[0] != v);
        }

        for (int i = 1; i < n; i++) {
            vector<int> newDp(7, 1e9);
            for (int v = 1; v <= 6; v++) {
                int cost = (a[i] != v);
                for (int u : adj[v]) {
                    newDp[v] = min(newDp[v], dp[u] + cost);
                }
            }
            dp = newDp;
        }

        int ans = *min_element(dp.begin() + 1, dp.end());
        cout << ans << endl;
    }


}

