/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    string s;
    cin>>s;
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(tmp==s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

