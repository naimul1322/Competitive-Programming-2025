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
    if(n<1000)
    {
        cout<<n<<endl;
    }
    else if(n<10000)
    {
        cout<<(n/10)*10<<endl;
    }
    else if(n<100000)
    {
        cout<<(n/100)*100<<endl;
    }
    else if(n<1000000)
    {
        cout<<(n/1000)*1000<<endl;
    }
    else if(n<10000000)
    {
        cout<<(n/10000)*10000<<endl;
    }
    else if(n<100000000)
    {
        cout<<(n/100000)*100000<<endl;
    }
    else if(n<1000000000)
    {
        cout<<(n/1000000)*1000000<<endl;
    }

}

