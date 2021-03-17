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
        ll n;
        ll x;
        cin >> n;
        cin >> x;

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        sort(v.begin(), v.end());

        if(v.at(n - 1) < x)
        {
            cout << 0 << endl;
            continue;
        }

        ll s = accumulate(v.begin(), v.end(), 0LL);

        if(double(s) / double(n) >= x)
        {
            cout << n << endl;
            continue;
        }

        ll lower = lower_bound(v.begin(), v.end(), x) - v.begin();

        ll mx = accumulate(v.begin() + lower, v.end(), 0LL);

        ll sum = mx;

        ll c = (n - lower) + 1;

        ll cnt = n - lower;

        for(ll i = lower - 1; i >= 0; i--)
        {
            sum += v.at(i);

            if(double(sum) / double(c) >= x)
            {
                cnt ++;
                c ++;
            }

            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }
}
