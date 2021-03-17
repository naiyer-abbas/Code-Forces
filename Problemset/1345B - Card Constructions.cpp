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
        ll n;
        cin >> n;

        ll h;
        ll cnt = 0;
        ll new_n;

        while(n > 1)
        {
            ll s = (sqrt(1 + 24  * n));

            h = (s - 1) / 6;

            if(h > 0)
            {
                cnt ++;
            }

            new_n = ((3 * h * h) + h) / 2;

            n = n - new_n;
        }

        cout << cnt << endl;

    }
}
