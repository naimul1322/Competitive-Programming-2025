/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


#define endl "\n"
#define MOD 1000000007

const int mx = 1e8+123;
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

long long  SOD( long long  n )
{
    long long  sod = 1;
    for ( auto p : primes ) {

        if( 1LL * p * p > n ) break;
        if( n % p == 0 ) {
            long long sum = 1;
            long long a = 1;

            while ( n % p == 0 ) {
                a *= p;
                sum += a;
                n /= p;
            }

            sod *= sum;
        }

    }

    if(n > 1) {
        sod *= (n + 1);
    }

    return sod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int lim = 1e5;
    primeGen(lim);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<SOD(n)-n<<endl;
    }

}

