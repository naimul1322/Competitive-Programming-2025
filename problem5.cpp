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
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int ans=0;
    //sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]>v[i+1]){
            ans=i;
            break;
        }
        else if(v[i]==v[i+1]){
            cout<<"Still Rozdil"<<endl;
            break;
        }
    }
    cout<<ans+1<<endl;

}

