#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

void solve(ll, ll);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t --)
    {
        ll n, k;
        cin >> n >> k;
        solve(n , k);
    }
}

void solve(ll n, ll k)
{
    if(n % 2 == 0)
    {
        if(k % n == 0)
        {
            cout << n <<endl;
            return;
        }

        cout << (k % n) << endl;
        return;
    }

    else
    {
        ll x = n / 2;
        ll f = (k - 1) / x;

        if((k + f) % n == 0)
        {
           cout << n << endl;
        }

        else
        {
            cout << (k + f) % n << endl;
        }

    }
}
