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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int  a;

    if(x1 == x2)
    {
        a = abs(y1 - y2);
        cout << x1 + a << " " << y1 << " " << x2 + a << " " << y2;
        return 0;
    }

    if(y1 == y2)
    {
        a = abs(x1 - x2);
        cout << x1 << " " << y1 + a <<" " <<  x2 << " " << y2 + a;
        return 0;
    }

    int x = abs(x1 - x2);
    int y = abs(y1 - y2);

    if(x != y)
    {
        cout << -1;
        return 0;
    }

    cout << x1 << " " << y2 << " " << x2 << " " << y1;
    return 0;
}
