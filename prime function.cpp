/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void prime(long long n)
{
    bool ans=true;
    if(n==0 || n==1){
        ans=false;
    }
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0){
            ans=false;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        prime(n);
    }


}

