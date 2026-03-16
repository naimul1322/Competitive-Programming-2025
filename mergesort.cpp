/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007

const int mx=1e5+123;
int a[mx];

void merge (int l,int mid,int r)
{
    int p=l;
    int q=mid+1;
    int len=r-l+1;
    int v[len];
    int k=0;
    for(int i=l; i<=r; i++)
    {
        if(p>mid)
        {
            v[k]=a[q];
            k++,q++;
        }
        else if(q>r)
        {
            v[k]=a[p];
            k++,p++;
        }
        else if(a[p]<=a[q])
        {
            v[k]=a[p];
            k++,p++;
        }
        else
        {
            v[k]=a[q];
            k++,q++;
        }
    }
    k=0;
    for(int i=l; i<=r; i++)
    {
        a[i]=v[k];
        k++;
    }
}

void mergesort(int l,int r)
{
    if(l==r) return ;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,mid,r);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
     mergesort(1,n);
    int ans=0;
     for(int i=1; i<=n; i++)
     {
         if(a[i]!=a[i-1])
         {
             ans++;
         }
     }
     cout<<ans<<endl;

}

