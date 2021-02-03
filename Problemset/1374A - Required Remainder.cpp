#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll n, x, y;
        cin >> x >> y >> n;

        ll temp = n % x;

        if(temp == y)
        {
            cout << n << endl;
        }

        else if(temp > y)
        {
            cout << n - (temp - y)  << endl;
        }

        else
        {
            cout << (n - temp) - (x - y) << endl;
        }
    }
}
