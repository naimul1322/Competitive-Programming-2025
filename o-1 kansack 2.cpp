/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
int arr[mx];
bitset<int> isprime[mx];
vector<int>

void primes(int n)
{
    for(int i=3; i<=n; i+=2)isprime=1;
    for(int i=3; i*i<=n; i+=2)
    {
        if(i%n==0)
        {
            isprime=0;

        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));



}

