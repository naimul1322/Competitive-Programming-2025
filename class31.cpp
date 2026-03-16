/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=2e5+123;
long long a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==k || a[i]+a[i+1]==k){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }


}

