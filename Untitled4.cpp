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
    sort(s.begin(),s.end());
    int sz=unique(s.begin(),s.end(),s.begin());
    for(int i=0; i<sz; i++)
    {
        if(s[i]=="hello") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}

