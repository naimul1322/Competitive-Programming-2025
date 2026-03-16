/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
typedef long long ll;

const int mx = 1e7+123;
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

ll PHI(int n)
{
    if(n==1) return 0;
    ll phi=n;
    for(auto p:primes)
    {
        if(1LL* p*p>n) break;
        if(n%p==0)
        {
            while (n%p==0)
            {
                n/=p;
            }
            phi/=p;
            phi*=(p-1);

        }
    }
    if(n>1)
    {
        phi/=n;
        phi*=(n-1);
    }
    return phi;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim=1e6;
    primeGen(lim);

    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<PHI(n)<<endl;
    }

}

