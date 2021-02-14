#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll n, q, k;
    cin >> n >> q >> k;
    vector <ll> v;
    v.pb(-1);
    ll temp;
    ll arr[100001] = {};

    for(ll i = 1; i <= n; i++)
    {
        cin >> temp;
        v.pb(temp);
        ll c = 0;
        if(i >= 2)
        {
            if(i % 2)
            c += (v.at(i) - v.at(i - 2)) - 1;

            else
        }

    }



    while(q --)
    {
        ll l , r;
        cin >> l >> r;

        if(l == r)
        {
            cout << k - 1 << endl;
            continue;
        }

        ll count = 0;

        count += v.at(l + 1) - 1;
        count += (k - v.at(r - 1));

        for(ll i = r - 1; i >= l + 1; i--)
        {

            count += (v.at(i + 1) - v.at(i - 1)) - 1;

        }


        if(l != r)
        {
            cout << count - (r - l) - 1 << endl;
        }


    }
}
