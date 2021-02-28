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
        ll n;
        cin >> n;
        ll temp;
        vector <ll> v;
        for(ll i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        sort(v.begin(), v.end());
        ll x = upper_bound(v.begin(), v.end(), v.at(0)) - v.begin();
        cout << n - x << endl;
    }
}
