#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

void solve(ll);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll n;
        cin >> n;
        solve(n);
    }
}

void solve(ll n)
{
    ull sum = 0;
    ll i = 1;
    ull x = 0;

    for(i = 1; i <= n / 2; i++)
    {
        x = 8 * i * i;
        sum += x;
    }
    cout << sum << endl;

}
