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
    bool isper=false;
    for(int i=1; i<=n; i++)
    {
        if(i*i==n) {
            cout<<"is a perfect"<<endl;
            isper=true;
        }
    }
    if(!isper)cout<<"NOT"<<endl;


}

