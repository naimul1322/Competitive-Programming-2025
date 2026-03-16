/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

int cal(int x)
{
    return (3*x*x)+(2*x)+5;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
     int k=100;
     int l=0, r=15;
     int ans=-1;
     while(l<=r)
     {
         int mid=(l+r)/2;
         cout<<" L= "<<l<<" R = "<<r<<"  Mid = "<< mid<<" cal MId= "<< cal(mid)<<endl;
         if(cal(mid)>=k)
         {
             ans=mid;
             r=mid-1;
         }
         else
         {
             l=mid+1;
         }
     }
     cout<<ans<<endl;

}
