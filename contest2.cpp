/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

int largestOddDivisor(int x)
{
    while (x % 2 == 0)
    {
        x /= 2;
    }
    return x;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        bool possible = true;
        for (int i = 1; i <= n; i++)
        {
            if (largestOddDivisor(i) != largestOddDivisor(arr[i]))
            {
                possible = false;
                break;
            }
        }

        if(possible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



}

