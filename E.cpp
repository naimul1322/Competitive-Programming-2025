#include <bits/stdc++.h>
using namespace std;


const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> L(n + 1), R(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> L[i] >> R[i];
        }

        vector<int> parent(n + 1, -1);
        parent[1] = 0;
        for (int i = 1; i <= n; ++i) {
            if (L[i]) parent[L[i]] = i;
            if (R[i]) parent[R[i]] = i;
        }

        vector<int> sz(n + 1);
        function<void(int)> dfs_sz = [&](int u) {
            if (u == 0) return;
            sz[u] = 1;
            if (L[u]) {
                dfs_sz(L[u]);
                sz[u] += sz[L[u]];
            }
            if (R[u]) {
                dfs_sz(R[u]);
                sz[u] += sz[R[u]];
            }
        };
        dfs_sz(1);

        vector<long long> expo(n + 1);
        for (int i = 1; i <= n; ++i) {
            expo[i] = (2LL * sz[i] - 1 + MOD) % MOD;
        }

        vector<long long> T(n + 1, 0);
        T[0] = 0;
        function<void(int)> dfs_t = [&](int u) {
            if (u == 0) return;
            T[u] = (expo[u] + T[parent[u]]) % MOD;
            if (L[u]) dfs_t(L[u]);
            if (R[u]) dfs_t(R[u]);
        };
        dfs_t(1);

        for (int i = 1; i <= n; ++i) {
            if (i > 1) cout << " ";
            cout << T[i];
        }
        cout << "\n";
    }

    return 0;
}
