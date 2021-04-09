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

        vector < pair <int, int> > coordinates(n);

        for(auto &e : coordinates)
        {
            cin >> e.first >> e.second;
        }

        sort(coordinates.begin(), coordinates.end());

        int mx = INT_MIN;
        int br = 0;

        for(auto &e : coordinates)
        {
            if(e.second >= mx)
            {
                mx = e.second;
            }

            else
            {
                br = 1;
                break;
            }
        }

        if(br)
        {
            cout << "NO" << endl;
            continue;
        }

        string ans;

        int r = 0, u = 0;

        for(auto &e : coordinates)
        {
            for(int i = 0; i < e.first - r; i++)
            {
                ans.pb('R');
            }

            for(int i = 0; i < e.second - u; i++)
            {
                ans.pb('U');
            }

            r += (e.first - r);
            u += (e.second - u);
        }

        cout << "YES" << endl;
        cout << ans << endl;

    }
}
