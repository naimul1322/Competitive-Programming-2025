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
     int a[n+1];
     for(int i=0; i<n; i++)
     {
         cin>>a[i];
     }
     for(int i=n-1; i>=0; i--)
     {
         cout<<a[i];
         if(i!=0) cout<<" ";
     }
     cout<<endl;

}

