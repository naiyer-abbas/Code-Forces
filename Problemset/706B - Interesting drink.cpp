#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll n, temp, q;
    cin >> n;

    vector <ll> v;

    for(ll i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    sort(v.begin(), v.end());

    cin >> q;

    vector <ll> ans(q, 0);

    for(ll i = 0; i < q; i++)
    {
        cin >> temp;
        ans.at(i) = (upper_bound(v.begin(), v.end(), temp) - v.begin());
    }

    for(const auto& e : ans)
    {
        cout << e << endl;
    }
  return 0;
}
