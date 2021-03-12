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
        ll a, b;
        cin >> a >> b;

        if(!a || !b)
        {
            cout << 0 << endl;
            continue;
        }

        ll ans;

        if(max(a, b) <= 2 * min(a, b))
        {
             ans = max(a, b) - min(a, b);
            ll rem = min(a, b) - ans;

            if(rem % 3 == 0 || rem % 3 == 1)
            {
                ans += ((rem / 3) * 2);
            }

            else
            {
                ans += ((rem / 3) * 2) + 1;
            }

        }

        else
        {
            ans = min(a, b);
        }


        cout << ans << endl;
    }
}
