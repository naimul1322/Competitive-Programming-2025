/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int n=10;
     int snod=0;
     for(int i=1; i<=n; i++)
     {
         int nod=0;
         for(int j=1; j<=i; j++)
         {
             if(i%j==0)
             {
                 nod++;
             }
         }
         snod+=nod;
     }
     cout<<snod<<endl;

}

