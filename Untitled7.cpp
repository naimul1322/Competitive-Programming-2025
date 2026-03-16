/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout<<fixed<<setprecision(2);

   float score1 = -1, score2 = -1;
   float input;
   while(1)
   {
       cin >> input;
        if (input >= 0 && input <= 10) {
            if (score1 == -1) {
                score1 = input;
            } else {
                score2 = input;
                break;
        }
        }
         else {
            cout << "nota invalida" << endl;

   }
   float average = (score1 + score2) / 2;
    cout << "media = " << average << endl;


}
}

