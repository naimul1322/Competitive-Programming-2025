/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0) cout<<i<<" "<<endl;
    }
    cout<<endl;


}

