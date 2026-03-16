/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        bool ans=false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            {
                ans=true;
                break;
            }
        }
        if(ans)cout<<1<<endl;
        else{

        cout<<s.size()<<endl;
        }

    }

}

