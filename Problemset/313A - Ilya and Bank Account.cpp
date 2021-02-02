#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll n;
    cin >> n;
    if(n >= 0)
    {
        cout << setprecision(15) <<  n;
    }

    else
    {
        ll temp = n / 10;
        if(n % 10 <= temp % 10)
        {
            cout << setprecision(15) <<  n / 10;
        }

        else
        {
           cout << setprecision(15) << (n / 100) * 10 + (n % 10);
        }
    }
}
