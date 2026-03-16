/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int x,n;
    cin>>x>>n;
    int ans=1;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            ans*=x;

        }

    }
    cout<<ans<<endl;


}

