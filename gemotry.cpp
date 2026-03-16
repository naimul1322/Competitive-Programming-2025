/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    int dis=abs(b-a);
    if(dis>2)dis=5-dis;

    int dis2=abs(d-c);
    if(dis2>2) dis2=5-dis2;
    if(dis==dis2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}

