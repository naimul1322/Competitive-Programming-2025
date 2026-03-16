/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e6+12;
bitset<mx> isprime;
long long  phi[mx];
vector<int> v;
int ans[mx];

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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int lim=1e6;
     primegen(lim);

     for(int i=1; i<=lim; i++) phi[i]=i;

     for(auto u: v)
     {
         for(int j=u; j<=lim; j+=u)
         {
             phi[j]/=u;
             phi[j]*=(u-1);
         }
     }
     for(int i=1; i<=lim; i++)
     {
         for(int j=i; j<=lim; j+=i)
         {
             ans[j]+=(phi[i]*i);
         }
     }

     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
         long long val=ans[n]+1;
         val*=n;
         val/=2;
         cout<<val<<endl;
     }



}
