/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

   int n,a,b,x;
   cin>>n>>a>>b>>x;
   if(a<b)
   {
       if(a<=x && x<=b) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   else
   {
       if(b<=x && x<=a) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


}

