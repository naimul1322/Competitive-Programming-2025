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

    int x,y;
    while(cin>>x>>y;)
    {

        if(x<=0 || y<=0) break;
        int sum=0;
        if(x>y)
        {
            swap(x,y);
        }
        for(int i=x; i<=y; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"SUM="<<sum<<endl;

    }


}

