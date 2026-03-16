/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int tc;
    cin>>tc;
    while(tc--)
    {

        int x,y;
        cin>>x>>y;
        if(x+1>=y && (x+1-y)%9==0)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }


}

