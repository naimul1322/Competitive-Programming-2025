/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int c,r;
    cin>>c>>r;
    int m[4][3];
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cin>>m[j][i];
        }
    }

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
           if(m[j][i]>50) cout<<"g ";
           else cout<<"b ";
        }
        cout<<endl;
    }


}

