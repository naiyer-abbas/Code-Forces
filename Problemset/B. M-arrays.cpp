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
    int t;
    cin >> t;
    while( t--)
    {
        int n, m;
        int check[100001] = {};
        cin >> n >> m;
        vector <ll> v(n);

        unordered_set <ll> s;
        int cnt = 0;

        unordered_map <ll, ll> um;

        for(auto &e : v)
        {
            cin >> e;
            e = e % m;

            if(um.find(e) == um.end())
            {
                um[e] = 1;
            }

            else
            {
                um[e] ++;
            }
        }

        for(auto &e : um)
        {
            if(e.first == 0 && e.second > 0)
            {
                cnt ++;
                e.second = 0;
                continue;
            }

            if(um.find(m - e.first) == um.end() && e.second > 0)
            {
                cnt += e.second;
            }

            else
            {
                if(e.second == um[m - e.first] && e.second > 0)
                {
                    cnt ++;
                    e.second = 0;
                    um[m - e.first] = 0;
                }

                else if(e.second < um[m - e.first] && e.second > 0)
                {
                    cnt ++;
                    um[m - e.first] = (um[m - e.first] - e.second) - 1;
                    e.second = 0;

                    cnt += um[m - e.first];
                    um[m - e.first] = 0;
                }

                else if(e.second > 0 && e.second > um[m - e.first])
                {
                    cnt ++;
                    e.second = (e.second - um[m - e.first]) - 1;
                    um[m - e.first] = 0;
                    cnt += e.second;
                    e.second = 0;
                }
            }
        }

        cout << cnt << endl;

    }
}
