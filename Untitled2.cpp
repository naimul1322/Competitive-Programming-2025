/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a=n/2;
        if(a%2==1) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;

            for(int i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
            }
            for(int i=1; i<=n+1; i+=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }
    }


}

