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

bool isPowerOfTwo(ll n)
{
   if(n == 0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    fast
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        if(is_sorted(v.begin(), v.end()))
        {
            cout << 0 << endl;
            continue;
        }

        ll mx = LONG_MIN;
        ll mx_diff = 0;

        for(int i = 0; i < n; i++)
        {
            if(v.at(i) > mx)
            {
                mx = v.at(i);
            }

            ll diff = mx - v.at(i);
            if(diff > 0)
            {
                mx_diff = max(mx_diff, diff);
            }
        }

        if(isPowerOfTwo(mx_diff + 1))
        {
            ll ans = log2(mx_diff + 1);
            cout << ans << endl;
        }

        else
        {
            ll ans = log2(mx_diff + 1) + 1;
            cout << ans << endl;
        }
    }
}
