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
    int  t;
    cin >> t;
    while( t--)
    {
        int n;
        cin >> n;
        vector <pair <ll, ll> > v(n);

        for(auto &e : v)
        {
            cin >> e.first;
        }

        for(auto &e : v)
        {
            cin >> e.second;
        }

        vector <ll> test;

        for(auto &e : v)
        {
            test.pb(e.first);
        }

        if(is_sorted(test.begin(), test.end()))
        {
            cout << "YES" << endl;
            continue;
        }

        bool diff = false;

        int x = v.at(0).second;

        for(auto &e : v)
        {
            if(e.second != x)
            {
                diff = true;
                break;
            }
        }

        if(diff == true)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
