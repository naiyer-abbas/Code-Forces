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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll p = (a - x) + (b - y);

        if(p <= n)
        {
            cout << x * y << endl;
            continue;
        }

           ll extra = p - n;
           ll xc = x; ll yc = y;

            if(xc + extra <= a)
            {
                xc += extra;
            }

            else
            {
                ll t = xc;
                xc = a;
                ll temp = (t + extra) - a;
                yc += temp;
            }

            ll res1 = xc * yc;

            xc = x; yc = y;

            if(yc + extra <= b)
            {
                yc += extra;
            }

            else
            {
                ll t = yc;
                yc = b;
                ll temp = (t + extra) - b;
                xc += temp;
            }

            ll res2 = xc * yc;

            cout << min(res1, res2) << endl;
    }
}
