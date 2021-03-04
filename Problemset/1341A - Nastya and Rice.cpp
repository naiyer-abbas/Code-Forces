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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int g1 = (a - b) * n;
        int g2 = (a + b) * n;

        int p1 = (c - d);
        int p2 = (c + d);

        if(g2 < p1 || g1 > p2)
        {
            cout << "NO" << endl;
            continue;
        }

        else
        {
            cout << "YES" << endl;
        }
    }
}
