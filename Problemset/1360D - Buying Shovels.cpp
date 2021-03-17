#pragma GCC optimize("Ofast")
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
    fast
    int t;
    cin >> t;
    while(t --)
    {
        ll n, k;
        bool flag = false;
        cin >> n >> k;

        if(k >= n)
        {
            cout << 1 << endl;
            continue;
        }

        if(k >= n / 2 && n % 2 == 0)
        {
            cout << 2 << endl;
            continue;
        }

        vector <ll> v;

        for(ll i = 1; i * i <= n ; i ++)
        {
            if(n % i == 0)
            {
                ll f1 = n / i;
                ll f2 = i;

                v.pb(f1);
                v.pb(f2);
            }
        }

        sort(v.begin(), v.end());

        ll sz = v.size() - 1;

        for(int i = 0; i <= (sz / 2); i++)
        {
            if(v.at(sz - i) <= k)
            {
                cout << v.at(i) << endl;
                flag = true;
                break;
            }
        }

        if(flag == false)
        {
            for(ll i = sz / 2; i >= 0; i--)
            {
                if(v.at(i) <= k)
                {
                    cout << n / v.at(i) << endl;
                    break;
                }
            }
        }

    }
}
