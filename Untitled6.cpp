/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    char  ch[100];
    cin>>ch;
    int n=strlen(ch);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=(int)ch[i]-'0';
    }
    cout<<sum<<endl;

}

