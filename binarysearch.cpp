/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

const int mx=1e5+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0,r=n;
    int ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<endl;

}

