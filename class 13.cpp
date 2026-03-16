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
     int ans=n|1;
     ans=ans&(~2);
     ans=ans^(1<<2);
     cout<<ans<<endl;

}

