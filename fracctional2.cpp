/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef double dl;

#define endl "\n"
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(10);
    //memset(dp,-1,sizeof(dp));

    int T;
    cin >> T;

    for ( int tc = 1; tc <= T; tc++ )
    {
        dl AB, AC, BC, R;
        cin >> AB >> AC >> BC >> R;


        dl l = 0,  r = AB;

        for ( int i = 0; i < 60; i++ )
        {
            dl mid = ( r + l ) / 2;

            dl AD = mid;
            dl AE = ( AD * AC ) / AB;
            dl DE = ( AD * BC ) / AB;

            dl sADE = ( AD + AE + DE ) / 2;
            dl sABC = ( AB + AC + BC ) / 2;

            dl aADE = sqrt ( sADE * ( sADE - AD ) * ( sADE - AE ) * ( sADE - DE ) );
            dl aABC = sqrt ( sABC * ( sABC - AB ) * ( sABC - AC ) * ( sABC - BC ) );

            dl aBDEC = aABC - aADE;

            dl R1 = aADE / aBDEC;

            if ( R1 < R )
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << "Case " << tc << ": " << l << endl;
    }

}


