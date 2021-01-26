
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);


int main()
{
    fast;
    ll a[100001] = {};
    ll n;
    cin >> n;
    ll temp;
    for(ll i = 0; i < n; i++)
    {
        cin >> temp;
        a[temp] += temp;
    }


    ll m[100001] = {};
    m[0] = 0;
    m[1] = a[1];

    for(ll i = 2; i < 100001; i++)
    {
        m[i] = max(m[i - 1], a[i] + m[i - 2]);
       // m.pb(max(m.at(i - 1), v.at(i) + m.at(i - 2)));
    }

    sort(m , m + 100001);

    cout << m[100000];

}

