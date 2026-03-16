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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=n-1;
    int s=0,d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(v[l]>v[r])
            {
                s+=v[l];
                l++;
            }
            else
            {
                s+=v[r];
                r--;
            }

        }
        else
        {

        if(v[l]>v[r])
        {
            d+=v[l];
            l++;
        }
        else
        {
            d+=v[r];
            r--;
        }
        }
    }
    cout<<s<<" "<<d<<endl;


}

