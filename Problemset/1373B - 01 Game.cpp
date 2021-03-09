#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        string s;
        cin >> s;

        int c1 = 0, c0 = 0;

        for(auto &e : s)
        {
            if(e == '1')
            {
                c1 ++;
            }

            else if(e == '0')
            {
                c0++;
            }
        }

        int mn = min(c0, c1);

        if(s.size() == 0 || c0 == 0 || c1 == 0)
        {
            cout << "NET" << endl;
            continue;
        }

        if(mn % 2)
        {
            cout << "DA" << endl;
        }

        else
        {
            cout << "NET" << endl;
        }
    }
}
