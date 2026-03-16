/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5+123;

string s, t;
int n, m;
bool removed[mx];
int a[mx];

bool check ( int val )
{
    mem ( removed, 0 );

    for ( int i = 1; i <= val; i++ ) removed[a[i]-1] = 1;

    for ( int i = 0, j = 0; i < n; i++ )
    {
        if ( removed[i] ) continue;
        if ( s[i] == t[j] )
        {
            j++;
            if(j == m) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));

    cin >> s >> t;
    n = s.size();
    m = t.size();

    for ( int i = 1; i <= n; i++ ) cin >> a[i];

    int l = 0, r = n;
    int ans;

    while ( l <= r )
    {
        int mid = ( l + r ) / 2;

        if( check(mid) )
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    cout << ans << endl;

}
