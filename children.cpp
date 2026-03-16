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
    int ans=0;
    int a[10];
    for(int i=0; i<7; i++)
    {
        cin>>a[i];

    }
    int sum=0;
    for(int i=0; i<7; i++)
    {
       if(sum+=a[i]>=100)
       {
           ans=i;
       }

    }
    cout<<ans<<endl;


}

