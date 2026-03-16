/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
const int mx=1e2+12;
int arr[mx];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        bool ans=false;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]==67)
            {
                ans=true;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }



}

