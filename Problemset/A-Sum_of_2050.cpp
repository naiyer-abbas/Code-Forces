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

ll sum(ull n)
{
    ll temp;
    ll s = 0;
    while(n)
    {
        temp = n % 10;
        s += temp;
        n /= 10;
    }

    return s;
}

int main()
{
    fast
    int t;
    cin >> t;
    while(t --)
    {
        ull n;
        cin >> n;
        if(n % 2050)
        {
            cout << -1 << endl;
            continue;
        }

        else
        {
            ll res = n / 2050;
            cout << sum(res) << endl;
        }
    }
}