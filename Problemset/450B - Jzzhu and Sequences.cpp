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
    ll x, y;
    cin >> x >> y;
    ll n;
    cin >> n;
    ll arr[6] = {x - y, x, y, y - x, -x, -y};
    cout << (arr[n % 6] + 2 * MOD) % MOD;
}
