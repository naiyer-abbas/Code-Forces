#pragma GCC optimize("O2")
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
    while( t--)
    {
        int n;
        cin >> n;

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        ll c;
        ll m = LONG_MAX;

        if(v.at(1) >= v.at(0))
        {
           c = v.at(1) - v.at(0);
        }

        else
        {
            c = v.at(1);
            m = v.at(0);
        }



        int br = 0;

        for(int i = 1; i < n; i++)
        {
            if(v.at(i) > (v.at(i - 1) + c) / 2 && v.at(i) != v.at(i - 1) + c)
            {
                cout << -1 << endl;
                br = 1;
                break;
            }

            else if(v.at(i) < (v.at(i - 1) + c) / 2)
            {
                m = (v.at(i - 1) + c) - v.at(i);
            }

            if(v.at(i) != (v.at(i - 1) + c) % m)
            {
                cout << -1 << endl;
                br = 1;
                break;
            }
        }

        if(!br && m != LONG_MAX)
        {
            //cout << "YES" << endl;
            cout << m << " " << c << endl;
        }

        else if(!br)
        {
            //cout << "YES" << endl;
            cout << 0 << endl;
        }
    }
}
