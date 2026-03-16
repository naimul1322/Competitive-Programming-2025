/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int a[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           cin>>a[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}

