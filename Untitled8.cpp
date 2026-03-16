/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int a[7]={7,2,3,5,1,6,8};
    sort(a,a+7);
    reverse(a,a+7);
//    reverse(a,a+3);
//    reverse(a+4,a+7);
    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<" ";
    }


}

