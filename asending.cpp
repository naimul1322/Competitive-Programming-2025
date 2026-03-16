/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int x,y;
    while(1)
    {
        cin>>x>>y;
        if(x==0 || y==0) break;
        if(x>0 &&y>0) cout<<"primeiro"<<endl;
        else if(x>0 && y<0) cout<<"quarto"<<endl;
        else if(x<0 && y<0) cout<<"terceiro"<<endl;
        else if(x<0 && y>0) cout<<"segundo"<<endl;

    }


}

