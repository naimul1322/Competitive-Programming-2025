/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
typedef double dl;

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

int phi[mx];
long long preSum[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));

     int lim = 1e7;
    primeGen(lim);

    for ( int i = 1; i <= lim; i++ ) phi[i] = i;

    for ( auto p : primes ) {
        for ( int j = p; j <= lim; j += p ) {
            phi[j] /= p;
            phi[j] *= (p-1);
        }
    }

    for ( int i = 1; i <= lim; i++ ) {
        preSum[i] = preSum[i-1] + phi[i];
    }

    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,p;
        cin>>n>>p;
        long long g=-1;
        long long l=1,r=n;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            long long x=n/mid;
            if(preSum[x]>=p)
            {
                g=max(g,mid);
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<g<<endl;
    }




}
