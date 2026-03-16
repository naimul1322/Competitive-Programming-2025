/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e5+12;
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

int NOD (int n)
{
    int nod=1;
    for(auto u: v) {
        if(1LL*u*u>n) break;

        if(n%u==0) {
            int cnt=0;

            while(n%u==0) {
                n/=u;
                cnt++;
            }
            cnt++;
            nod*=cnt;
        }
    }
    if(n>1)
    {
        nod*=2;
    }
    return nod;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim=1e5;
    primegen(lim);
    int n=15;
    int snod=0;
    for(int i=1; i<=n; i++)
    {
        snod+=NOD(i);
    }
    cout<<snod<<endl;

}

