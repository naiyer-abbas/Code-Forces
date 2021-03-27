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
    fast;
    int t;
    cin >> t;
    while( t--)
    {
        int n;
        cin >> n;

        ll score[n] = {};

        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        ll ans = 0;

        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(i + v.at(i) < n)
            {
                score[i] = v.at(i) + score[i + v.at(i)];
            }

            else
            {
                for(int j = i; j < n; j++)
                {
                    score[i] += v.at(j);
                    j = (j + v.at(j)) - 1;
                }
            }

            ans = max(ans, score[i]);
        }

        cout << ans << endl;


    }
}
