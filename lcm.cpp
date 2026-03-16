/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     cout<<lcm(16,24)<<endl;

}

