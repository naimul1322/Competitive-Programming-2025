/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='O' || s[i]=='0'|| s[i]=='1'||s[i]=='2' || s[i]=='3'|| s[i]=='4'||s[i]=='5' || s[i]=='6')
            {
                cnt++;
            }
        }
        int over=cnt/6;
        if(cnt<6) cout<<cnt<<" BALLS"<<endl;
        else if(cnt>6) cout<<over<<" OVER"<<" "<<cnt%6<<" BALL"<<endl;
        else cout<<over<<" OVER"<<endl;

    }

}

