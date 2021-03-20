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
    while(t --)
    {
        int n;
        cin >> n;

        map <ll, ll> um;

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;

            um[e] ++;
        }

        vector <ll> vv;
        ll sum = 0;

        for(auto &e : um)
        {
            vv.pb(e.second);
        }

        sort(vv.begin(), vv.end());

        ll sz = vv.size();

        sum = accumulate(vv.begin(), vv.end(), 0LL);
        ll left, right, mn, cost;
        mn = 100001;

        sum -= vv.at(sz - 1);
        right = 0;
        left = sum;
        cost = left + right;
        mn = min(mn, cost);

        for(int i = sz - 2; i >= 0; i --)
        {
            sum -= vv.at(i);
            left = sum;
            right += (vv.at(i + 1) - vv.at(i)) * (sz - (i + 1));
            cost = left + right;
            mn = min(mn, cost);
        }


        cout << mn << endl;
    }
}
