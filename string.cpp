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
   string sk;
   for(int i=tmp.size()-1; i>=0; i--)
   {
       sk+=tmp[i];
   }
   if(sk==s) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;



}

