#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
        int n;
        cin >> n;

        ll mn = LONG_MAX;

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
            if(e < mn)
            {
                mn = e;
            }
        }

        if(is_sorted(v.begin(), v.end()))
        {
            cout << "YES" << endl;
            continue;
        }

        vector <ll> vc = v;
        sort(vc.begin(), vc.end());

        int br = 0;

        for(int i = 0; i < n; i++)
        {
            if(v.at(i) != vc.at(i) && v.at(i) % mn)
            {
                br = 1;
                cout << "NO" << endl;
                break;
            }
        }

        if(!br)
        {
            cout << "YES" << endl;
        }
    }
}
