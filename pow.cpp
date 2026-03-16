/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int a,b;
    cin>>a>>b;
    int ans=1;
    int sum=0;
    for(int i=1; i<=b; i++)
    {
        ans*=a;

    }
    cout<<ans<<endl;



}

