/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e5+123;
long long a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1]) ans=a[i+1];
        else break;
    }
    cout<<ans<<endl;


}

