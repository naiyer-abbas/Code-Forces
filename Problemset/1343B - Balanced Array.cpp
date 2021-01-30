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
    while(t -- )
    {
        int n;
        cin >> n;

        if((n / 2) % 2)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" <<endl;
            vector <ll> v;
            ll sum_e = 0 , sum_o = 0;

            for(ll i = 2; i <= n; i+=2)
            {
                sum_e += i;
                v.pb(i);
            }

            for(ll i = 1; i < n - 1; i += 2)
            {
                sum_o += i;
                v.pb(i);
            }

            v.pb(sum_e - sum_o);

            for(const auto& e: v)
            {
                cout << e << " ";
            }

            cout << endl;
        }
    }
}
