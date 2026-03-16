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
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];

        }
      //  bool ans=false;
      int ans;
        for(int i=1; i<=n; i++)
        {
            if(a[i]!=a[i+1])
            {
                ans=i;
                break;
            }
            }
            cout<<ans+1<<endl;
        }

    }




