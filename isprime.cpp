/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e8+12;
bitset <mx> isprime;
vector<int> v;

 void seivegen(int n)
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
     int lim=1e8;
     seivegen(lim);

     for(int i=0; i<v.size(); i+=100)
     {
         cout<<v[i]<<endl;
     }


}
