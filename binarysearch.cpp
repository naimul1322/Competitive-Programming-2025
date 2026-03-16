/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e3+12;
int arr[mx];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    int l=0, r=n-1;
    int x;
    cin>>x;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<arr[ans]<<endl;


}

