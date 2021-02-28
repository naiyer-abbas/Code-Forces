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
    int n, m;
    cin >> n >> m;
    if(m > n)
    {
        cout << -1;
        return 0;
    }

    else
    {
        ll res;
        for(int i = m; i < 100000; i += m)
        {
            res = 2 * i;
            if(res >= n)
            {
                cout << res / 2;
                break;
            }
        }
    }
}
