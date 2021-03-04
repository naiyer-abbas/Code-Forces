#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     //cout.tie(0);
#define MOD 1000000007

int main()
{
    fast;
    ll n;
    cin >> n;
    vector <ll> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    sort(v.begin(), v.end());

    cout << v.at(n - 1) - v.at(0) << " ";

    ll l_count = 0, r_count = 0;

    for(auto &e : v)
    {
        if(e != v.at(0))
        {
            break;
        }

        else
        {
            l_count ++;
        }
    }

    for(int i = n - 1; i > -1 ; i--)
    {
        if(v.at(i) != v.at(n - 1))
        {
            break;
        }

        else
        {
            r_count ++;
        }
    }

    if(v.at(0) == v.at(n - 1))
    {
        cout << ((n - 1) * n) / 2;
        return 0;
    }

    cout << l_count * r_count << endl;
}
