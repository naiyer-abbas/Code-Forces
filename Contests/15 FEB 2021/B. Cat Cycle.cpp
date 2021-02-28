#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
ll fun(ll);

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        ll n, k;
        cin >> n >> k;

        if(n % 2 == 0)
        {
            if(k % n)
            {
               cout << k % n << endl;
            }

            else
            {
                cout << k % (n + 1) << endl;
            }

        }

        else
        {
            if((k + fun(k)) % n)
            cout << ((k + (k / fun(k))) % n) << endl;

            else
                cout << ((k + (k / fun(k))) % (n + 1)) << endl;
        }
    }
}

ll fun(ll n)
{
    return floor(n / 2);
}
