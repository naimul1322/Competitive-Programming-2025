/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int fibo(int n)
{
    if(n==0 || n==1) return n;
    else  return  n+fibo(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;


}

