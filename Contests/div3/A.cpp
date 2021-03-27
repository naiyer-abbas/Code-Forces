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
    int t;
    cin >> t;
    while(t --)
    {
        ll n, m, x;
        cin >> n >> m >> x;

        ll temp;

        temp = ((x - 1) / n) + 1;
        ll term = 1 + ((temp - 1) * n);
        ll diff = x - term;

        //ll ans = term + (diff * m) << endl;
        cout << temp + (diff * m) << endl;
    }
}
