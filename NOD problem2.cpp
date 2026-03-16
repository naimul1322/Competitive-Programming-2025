/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
 int nod[1123];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int lim=1e3;
   for(int i=1; i<=lim; i++)
   {
       for(int j=i; j<=lim; j+=i)
       {
           nod[j]++;
       }
   }
   vector<pair<int,int>> v;
   for(int i=1; i<=lim; i++)
   {
       v.push_back({nod[i],-i});
   }
   sort(v.begin(),v.end());
   int tc;
   cin>>tc;
   for(int t=1; t<=tc; t++)
   {
       int n;
       cin>>n;
       cout<<"Case "<<t<<": "<<(v[n-1].second*-1)<<endl;
   }
}


