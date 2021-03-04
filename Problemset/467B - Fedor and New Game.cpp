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
    int n, m, k;
    cin >> n >> m >> k;
    vector <ll> v(m + 1);

    for(auto &e : v)
    {
        cin >> e;
    }

    ll x = v.at(m);
    vector <ll> ans;

    for(int i = 0; i < m; i++)
    {
        auto temp = x ^ v.at(i);
        ll c = 0;
        while(temp)
        {
            c += temp & 1;
            temp >>=1;
        }

        ans.pb(c);
    }

    ll friends = 0;

    for(auto &e : ans)
    {
        if(e <= k)
        {
            friends ++;
        }
    }

    cout << friends;

}
