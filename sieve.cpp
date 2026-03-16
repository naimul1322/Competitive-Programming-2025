/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e7+12;

bool isprime[mx];
vector<int> primes;

void primegen(int n)
{
    for(int i=2; i<=n; i++)
    {
        isprime[i]=1;
    }

    for(int i=2; i<=n; i++)
    {
        for(int j=i+i; j<=n; j+=i)
        {
            isprime[j]=0;
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(isprime[i]==1)
        {
            primes.push_back(i);
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim=20;
     primegen(lim);
     for(int i=0; i<primes.size(); i++)
     {
         cout<<primes[i]<<" ";
     }
     cout<<endl;

}

