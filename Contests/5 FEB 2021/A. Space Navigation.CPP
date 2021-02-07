#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int px, py;
        cin >> px >> py;
        string s;
        cin >> s;

        ll max_r = 0, max_l = 0, max_u = 0, max_d = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == 'R')
            {
                max_r ++;
            }

           else if(s.at(i) == 'L')
            {
                max_l --;
            }

           else if(s.at(i) == 'U')
            {
                max_u ++;
            }

            else if(s.at(i) == 'D')
            {
                max_d --;
            }

        }

        if(px <= max_r  && px >= max_l && py <= max_u && py >= max_d)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
