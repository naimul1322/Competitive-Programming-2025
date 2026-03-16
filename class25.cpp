/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    char str[20];
    cin>>str;
    //  int len=strlen(str);
    int len=0;
    while(str[len]!='\0')len++;
    for(int i=0; i<len/2; i++)
    {
//        char c=str[len-i-1];
//        str[len-i-1]=str[i];
//        str[i]=c;
      swap(str[i],str[len-i-1]);
    }
    cout<<str<<endl;


}

