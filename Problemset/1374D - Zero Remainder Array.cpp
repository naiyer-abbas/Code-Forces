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
        int64_t k;
        cin >> n >> k;

        vector <int64_t> v(n);
        vector <int64_t> diff(n);

        int cnt = 0;

        map <int64_t, int> um;

        for(int i = 0; i < n; i++)
        {
            cin >> v.at(i);
            if(v.at(i) % k)
            {
                if(v.at(i) < k)
                {
                    diff.at(i) = k - v.at(i);
                }

                else
                {
                    diff.at(i) = k - (v.at(i) % k);
                }

                um[diff.at(i)] ++;
            }
        }

        if(um.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int mx = 0;
        int mx2 = 0;

        for(auto &e : um)
        {
            if(e.second >= mx)
            {
                mx = e.second;
                mx2 = e.first;
            }
        }

        cout << mx2 + 1 + (mx - 1) * k << endl;

    }
}
