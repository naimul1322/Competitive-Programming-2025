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
      int k;
      cin>>k;
      int cnt=0;
      for(int i=1; ; i++)
      {
          if(i%3==0 || i%10==3){
            continue;
          }
          cnt++;
          if(cnt==k)
          {
              cout<<i<<endl;
              break;
          }

      }

  }

}

