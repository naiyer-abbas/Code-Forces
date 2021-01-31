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
    ll temp;
    vector <ll> v;

    for(ll i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    sort(v.begin(), v.end());

    ll sum = 0;

    for(ll i = 0; i < n - 1; i++)
    {
        sum += (v.at(n - 1) - v.at(i));
    }

    cout << setprecision(15) << sum;

}
