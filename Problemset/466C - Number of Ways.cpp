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
    int n;
    cin >> n;
    vector <ll> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    ll sum = accumulate(v.begin(), v.end(), 0LL);
    if(sum % 3)
    {
        cout << 0 << endl;
        return 0;
    }

    ll x = sum / 3;
    ll p = sum - sum / 3;
    ll s = 0;

    vector <ll> vec1;
    vector <ll> vec2;

    for(int i = 0; i < n - 1; i++)
    {
        s += v.at(i);
        if((i < n - 2) &&s == x)
        {
            vec1.pb(i);
        }

        if(i && s == p)
        {
            vec2.pb(i);
        }
    }

    ll ans = 0;

    for(auto e : vec1)
    {
        ans += vec2.size() - (upper_bound(vec2.begin(),vec2.end(), e) - vec2.begin());
    }

    cout << ans << endl;
}
