/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)cin>>arr[i];

    for(int i=1; i<n; i++)
    {
        int cur=arr[i];
        int pre=i-1;
        while(pre>=0 && arr[pre]>cur)
        {
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=cur;

    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
