/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int l,r,d;
    cin>>l>>r>>d;
    int sum=0;
    for(int i=l; i<=r; i+=d)
    {
        if(i==5 || i==7) continue;
        sum+=i;
    }
    cout<<sum<<endl;

}

