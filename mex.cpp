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
    set<int> st;
    for(int i=0; i<n; i++) {
        st.insert(i);
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.erase(x);
    }
    cout<<*st.begin()<<endl;



}

