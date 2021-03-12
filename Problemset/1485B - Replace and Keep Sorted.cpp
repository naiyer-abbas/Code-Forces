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

    ll n, q, k;
    cin >> n >> q >> k;

    if(n == 1)
    {
        while(q --)
        {
            ll l, r;
            cin >> l >> r;
            cout << k - 1 << endl;
        }
        return 0;
    }

    vector <ll> dp(n + 1, 0);

    vector <ll> v(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> v.at(i);
    }

    ll choice = (k - v.at(n - 1)) - 1;
    dp[n] = choice;

    for(int i = n - 1; i > 1; i--)
    {
        choice = (v.at(i + 1) - v.at(i - 1)) - 2;
        dp[i] = choice;
    }

    choice = v.at(2) - 2;
    dp[1] = choice;

    vector <ll> prev(n + 1, 0);

    for(int i = 1; i < n + 1; i++)
    {
        prev.at(i) = dp.at(i) + prev.at(i - 1);
    }

    while(q --)
    {
        ll l, r;
        cin >> l >> r;
        if(l == r || n == 1)
        {
            cout << k - 1 << endl;
            continue;
        }

        ll res = prev.at(r - 1) - prev.at(l);
        res += (v.at(l + 1) - 2);
        res += (k - v.at(r - 1)) - 1;
        cout << res << endl;
    }
}
