/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=5e6+12;
bitset<mx> isprime;
unsigned long long  phi[mx];
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int lim=5e6;
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
         phi[i]=(phi[i]*phi[i])+phi[i-1];
     }

     int tc;
     cin>>tc;
     for(int t=1; t<=tc; t++)
     {
         int a,b;
         cin>>a>>b;
         cout<<"Case "<<t<<" : "<<phi[b]-phi[a-1]<<endl;
     }

}
