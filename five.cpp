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

    int n,k,m ;
    cin>>n>>k>>m;
    int sum=0;
    for(int i=1; i<=n-1; i++)
    {
        int a;
        cin>>a;
        sum+=a;

    }
  //  cout<<sum<<endl;
    int miss=(m*n)-sum;
    if(miss<0) cout<<0<<endl;
    else if(miss<=k) cout<<miss<<endl;

    else cout<<-1<<endl;


}
