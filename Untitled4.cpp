/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e5+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n*7; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n*7; i++)
    {
        ans+=a[i];
        if(i%7==0)
        {
            cout<<ans<<" ";
            ans=0;
        }
    }
    cout<<endl;

    }

