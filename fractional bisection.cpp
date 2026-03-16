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
    double n;
    cin>>n;
    double l=0, r=n;
    while(r-l>1e-9)
    {
        double mid=(l+r)/2;

        if(mid*mid<n)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout<<l<<endl;

}

