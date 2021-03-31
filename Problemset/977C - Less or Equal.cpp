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
    fast;
    int n, k;
    cin >> n >> k;

    vector <ll> v(n);

    for(auto& e : v)
    {
        cin >> e;
    }


    sort(v.begin(), v.end());

    if(k == 0)
    {
        if(v.at(0) > 1)
        {
            cout << 1 << endl;
            return 0;
        }

        cout << -1 << endl;
        return 0;
    }


    ll ans = v.at(k - 1);
    if(k < n)
    {
        if(v.at(k - 1) == v.at(k))
        ans = -1;

        else
        {
            ans = v.at(k - 1);
        }
    }

    else
    {
        ans = v.at(k - 1);
    }

    cout << ans;

}
