/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
   int n;
   cin>>n;
   int a[n+1];
   int sum=0;
   for(int i=1; i<=n-1; i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   int sum2=0;
   for(int i=1; i<=n; i++)
   {
       sum2+=i;
   }
   cout<<sum2-sum<<endl;


}

