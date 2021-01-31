#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    double n, m, a, b;
    cin >> n >> m >> a >> b;

    if(b / m >= a)
    {
        cout << setprecision(15) << n * a;
    }

    else
    {
        ll x = (int(n) / int(m)) * int(b);
        ll y = int(n) % int(m);
        if(a * y <= b)
        {
            x += a * y;
        }

        else
        {
            x += b;
        }

        cout << setprecision(15) << x;

    }
}
