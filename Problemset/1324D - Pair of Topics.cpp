#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
    fast
    int n;
    cin >> n;
    vector <pair<ll, ll>> v(n);

    for(auto &e : v)
    {
        cin >> e.first;
    }

    for(auto &e: v)
    {
        cin >> e.second;
    }

    sort(v.begin(), v.end());

    vector <ll> diff;

    for(auto &e : v)
    {
        diff.pb(e.first - e.second);
    }

    sort(diff.begin(), diff.end());

    ll ans = 0;

    for(auto &e : diff)
    {
        if(e <= 0)
        {
            if((-1 * e) + 1 <= diff.at(diff.size() - 1))
            {
               int l = lower_bound(diff.begin(), diff.end(), (-1 * e) + 1) - diff.begin();
               ans += (n - l);
            }

        }

        else
        {
            int l = (lower_bound(diff.begin(), diff.end(), (-1 * e) + 1) - diff.begin()) + 1;
            ans += (n - l);
        }
    }

    cout << ans / 2 << endl;


}
