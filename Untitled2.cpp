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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        long long cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0) cnt++;
        }
        cout<<cnt<<endl;

    }


}

