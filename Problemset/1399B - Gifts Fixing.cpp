#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t --)
    {
        ll n;
        cin >> n;
        vector <ll> c;
        vector <ll> o;

        ll temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            c.pb(temp);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            o.pb(temp);
        }

        ll min_c = *min_element(c.begin(), c.end());
        ll min_o = *min_element(o.begin(), o.end());

        ll moves = 0;

        for(int i = 0; i < n; i++)
        {
            if(c.at(i) > min_c || o.at(i) > min_o)
            {
               moves += max(c.at(i) - min_c, o.at(i) - min_o);
            }

        }

        cout << moves << endl;

    }
}
