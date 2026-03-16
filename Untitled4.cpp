/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    map<string ,int> mp;
    vector<string> s;
    //cin>>s;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        s.push_back(word);
        mp[word]++;
    }
    string res=words[0];
    int mx=mp[res];
    for(auto u: s)
    {
        if(mp[u]>mx){
            res=u;
            mx=mp[u];
        }
    }


}

