/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e7+12;
bitset<mx> isprime;
vector<int> v;
void primegen(int n)
{
    for(int i=3; i<=n; i+=2) isprime[i]=1;

    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
                isprime[j]=0;
            }
        }
    }
    isprime[2]=1;
    v.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(isprime[i]==1)
        {
            v.push_back(i);
        }
    }
}


vector<long long> primeFactors ( long long n )
{
    vector<long long> factors;

    for ( auto p : v ) {

        if( 1LL * p * p > n ) break;

        if( n % p == 0 ) {
            factors.push_back(p);
            while ( n % p == 0 ) {
                n /= p;
            }
        }
    }

    if(n > 1) {
        factors.push_back(n);
    }

    return factors;
}

long long a[123];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int lim=1e7;
     primegen(lim);
     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
         for(int i=1; i<=n; i++) cin>>a[i];
         set<long long> ans;
         for(int i=1; i<=n; i++)
         {
             vector<long long> factors=primeFactors(a[i]);
             for(auto u: factors)
             {
                 ans.insert(u);
             }
         }
         cout<<ans.size()<<endl;
         for(auto u: ans)
         {
             cout<<u<<endl;
         }

     }


}

