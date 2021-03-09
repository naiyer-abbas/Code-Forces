#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

//int a[100001] = {};

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll n, k;
        cin >> n >> k;
        ll sd = n;

        if(n % 2)
        {
            for(int i = 3; i <= n / 2; i += 2)
            {
                if(n % i == 0)
                {
                    sd = i;
                    break;
                }
            }

            n = n + sd;

            ll res = 2 * (k - 1);
            ll ans = n + res;
            cout << ans << endl;
        }

        else
        {
            ll res = 2 * k;
            ll ans = n + res;
            cout << ans << endl;
        }


    }
}
