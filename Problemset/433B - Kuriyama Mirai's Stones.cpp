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
    int n;
    cin >> n;
    vector <ll> v(n);

    ll sum = 0;

    vector <ll> pref_unsorted;  // prefix sum array for unsorted vector

    for(auto &e : v)
    {
        cin >> e;
        sum += e;
        pref_unsorted.pb(sum);
    }

    vector <ll> vs = v;

    sort(vs.begin(), vs.end());

    vector <ll> pref_sorted;    // prefix sum array for sorted vector

    sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += vs.at(i);
        pref_sorted.pb(sum);
    }

    int m;
    cin >> m;

    while(m --)
    {
        int type, l, r;
        cin >> type >> l >> r;
        l --;
        r --;
        if(type == 1)
        {
            if(l > 0)
            {
                cout << pref_unsorted.at(r) - pref_unsorted.at(l - 1) << endl;
            }

            else
            {
                cout << pref_unsorted.at(r) << endl;
            }
        }

        else if(type == 2)
        {
            if(l > 0)
            {
                cout << pref_sorted.at(r) - pref_sorted.at(l - 1) << endl;
            }

            else
            {
                cout << pref_sorted.at(r) << endl;
            }
        }
    }
}
