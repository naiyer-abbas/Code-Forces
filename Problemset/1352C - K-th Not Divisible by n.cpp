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
        ll n, k;
        cin >> n >> k;
            ll ans = k + (k / n);
            ll x;

            while((ans / n) - (k / n))
            {
                x = ans;
                ans += ((ans / n) - (k / n));
                k = x;
            }

            cout << ans << endl;
    }
}
