/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);


    while(1)
    {
        int a,b;
    cin>>a>>b;
        if(a==0 && b==0) break;
        for(int i=1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        cout<<endl;
    }


}

