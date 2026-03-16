/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

     int a,b,c;
     cin>>a>>b>>c;
     if(a<b)
     {
         if(c<a) cout<<c<<" "<<a<<" "<<b<<endl;
         else {
            if(c<b)cout<<a<<" "<<c<<" "<<b<<endl;
            else cout<<a<<" "<<b<<" "<<c<<endl;
         }
     }
     else
     {
         if(c<b) cout<<c<<" "<<b<<" "<<a<<endl;
         else {
            if(c<a) cout<<b<<" "<<c<<" "<<a<<endl;
            else cout<<b<<" "<<a<<" "<<c<<endl;
         }
     }

}

