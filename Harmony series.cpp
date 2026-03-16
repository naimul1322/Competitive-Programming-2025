/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e6+12;
int cnt[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));

       int lim=1e6;
        for(int i=1; i<=lim; i++)
        {
            for(int j=i; j<=lim; j+=i)
            {
                cnt[j]++;
            }
        }
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            cout<<cnt[x]<<endl;
        }


}

