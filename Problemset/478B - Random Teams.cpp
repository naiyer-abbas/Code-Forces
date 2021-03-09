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
    ll m, n;
    cin >> n >> m;

    ll mx = ((n - (m - 1)) * (n - m)) / 2;

    ll x = n / m;
    ll mn =  (((x - 1)* (x)) / 2) * (m - (n % m)) + (((x) * (x + 1)) / 2) * (n % m);
    cout << mn << " " << mx;
}
