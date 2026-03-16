/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx = 1e6+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 )
    {
        if(isPrime[i])
        {
            for ( int j = i*i; j <= n; j += i )
            {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 )
    {
        if(isPrime[i] == 1)
        {
            primes.push_back(i);
        }
    }
}

long long phi[mx];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim = 1e6;
    primeGen(lim);

    for ( int i = 1; i <= lim; i++ ) phi[i] = i;

    for ( auto p : primes )
    {
        for ( int j = p; j <= lim; j += p )
        {
            phi[j] /= p;
            phi[j] *= (p-1);
        }
    }

    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long sum=(n*(n-1))/2;
        long long sumcoprime=(phi[n]*n)/2;
        cout<<sum-sumcoprime<<endl;

    }

}
