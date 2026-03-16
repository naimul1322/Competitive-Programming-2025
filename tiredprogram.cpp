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
    int ekok=n-n/10*10;
    n/=10;
    int dosok=n-n/10*10;
    cout<<"K"<<dosok<<ekok<<endl;


}

