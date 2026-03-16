/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e7+12;
bitset<mx> isprime;
vector<int> v;
int cntprime[mx];

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

    for(int i=3; i<=n; i++)
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
     int lim=1e7;
     primegen(lim);

     int limx=3200;
     int limy=60;

     for(int x=1; x<=limx; x++)
     {
         for(int y=1; y<=limy; y++)
         {
             int val=(x*x)+(y*y*y*y);

             if(val<=lim && isprime[val])
             {
                 cntprime[val]=1;
             }

         }

     }

     for(int i=1; i<=lim; i++)
     {
         cntprime[i]+=cntprime[i-1];
     }

     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
         cout<<cntprime[n]<<endl;
     }

}


