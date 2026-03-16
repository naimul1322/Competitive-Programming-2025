
/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e6+12;
bitset<mx> isprime;
vector<int> v;

void primegen(int n)
{
    for(int i=3; i<=n; i+=2)
    {
        isprime[i]=1;
    }

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
   // v.push_back(2);
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

     int n;
     while(cin>>n)
     {
         if(n==0) break;
         bool done =false;
         for(auto u: v)
         {
             if(u>n) break;
             int a=u;
             int b=n-a;

             if(isprime[b])
             {
                 cout<<n<<" = "<<a<<" + "<<b<<endl;
                 done=true;
                 break;
             }

         }

         if(!done) cout<<"Goldbach's conjecture is wrong."<<endl;

     }

}
