/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout<<fixed<<setprecision(2);
    stack<int> st;
    st.push(7);
    st.push(5);
    st.push(2);
    st.push(10);
    st.pop();
    cout<<st.top()<<endl;


}

