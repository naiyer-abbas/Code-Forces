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
    ll n;
    cin >> n;

    unordered_set <ll> um;

    ll sum = 0;

    for(int i = 1; i <= LONG_MAX; i++)
    {
        sum += i;
        if(sum > n)
        {
            break;
        }

        else
        {
            um.insert(sum);
        }
    }

    int br = 0;

    for(auto &e : um)
    {
        ll temp = n - e;
        if(um.find(temp) != um.end())
        {
            cout << "YES" << endl;
            br = 1;
            break;
        }
    }

    if(!br)
    {
        cout << "NO" << endl;
    }
}
