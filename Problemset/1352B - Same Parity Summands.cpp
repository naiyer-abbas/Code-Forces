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
        ll n, k;
        cin >> n >> k;

        if(k > n)
        {
            cout << "NO" << endl;
            continue;
        }

        if(n % 2 && !(k % 2))
        {
            cout << "NO" << endl;
            continue;
        }

        if(n % 2 && k % 2)
        {
            cout << "YES" << endl;
            for(int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
            continue;
        }

        if(n % 2 == 0 && k % 2 == 0)
        {
            cout << "YES" << endl;
            for(int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
            continue;
        }

        if(n % 2 == 0 && k % 2)
        {
            if(2 * k > n)
            {
                cout << "NO" << endl;
                continue;
            }

            else
            {
                cout << "YES" << endl;
                for(int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - 2 * (k - 1) << endl;
            }
        }
    }
}
