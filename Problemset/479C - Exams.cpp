#pragma GCC optimize("O2")
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
    int n;
    cin >> n;

    vector < pair <ll, ll> > v(n);

    for(auto &e : v)
    {
        cin >> e.first >> e.second;
    }

    sort(v.begin(), v.end());

    ll mn = LONG_MIN;

    for(int i = 0; i < n; i++)
    {
        if(v.at(i).second >= mn)
        {
            mn = v.at(i).second;
        }

        else
        {
            mn = v.at(i).first;
        }
    }

    cout << mn << endl;
}
