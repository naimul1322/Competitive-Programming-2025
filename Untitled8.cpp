/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e5+123;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }

    }
    int x;
    cin>>x;
    bool ans=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(a[i][j]==x){
            ans=true;
            break;

           }
        }

    }
    if(!ans) cout<<"will take number"<<endl;
    else cout<<"will not take number"<<endl;




}

