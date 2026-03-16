#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        vector<pair<int,int>> dots;
        dots.reserve(n*m);

        for(int i = 0; i < n; i++){
            string row;
            cin >> row;
            for(int j = 0; j < m; j++){
                if(row[j]=='.'){
                    dots.emplace_back(i, j);
                }
            }
        }

        long long ans = 0;
        int k = dots.size();
        // Count every unordered pair whose coordinate‐difference is primitive
        for(int a = 0; a < k; a++){
            for(int b = a+1; b < k; b++){
                int dx = abs(dots[a].first  - dots[b].first);
                int dy = abs(dots[a].second - dots[b].second);
                if(std::gcd__(dx, dy) == 1){
                    ans++;
                }
            }
        }

        cout << ans << "\n";
        dots.clear();
    }
    return 0;
}
