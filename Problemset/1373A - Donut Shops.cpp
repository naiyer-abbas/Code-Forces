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
        ll a, b, c;
        cin >> a >> b >> c;

        if(a >= c)
        {
            cout << -1 << " " << b << endl;
            continue;
        }

        if(a < c && c / b < a)
        {
            cout << 1 << " " << b << endl;
            continue;
        }

        if(a < c && c / b >= a)
        {
            cout << 1 << " " << -1 << endl;
        }
    }
}
