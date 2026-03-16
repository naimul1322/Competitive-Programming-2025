/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e5+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx=a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i]!=mx)
        {
            mx=i;
            break;
        }
    }
    cout<<mx+1<<endl;


}

