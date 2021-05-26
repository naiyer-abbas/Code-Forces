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
        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        if(is_sorted(v.begin(), v.end()))
        {
            cout << 0 << endl;
            continue;
        }

        if(v.at(0) != 1 && v.at(n - 1) != n)
        {
            if(v.at(0) == n && v.at(n - 1) == 1)
            {
                cout << 3 << endl;
                continue;
            }

            cout << 2 << endl;
            continue;
        }

        cout << 1 << endl;
    }
}
