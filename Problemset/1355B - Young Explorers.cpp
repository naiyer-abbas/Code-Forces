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
    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        map <int, int> um;

        for(auto &e : v)
        {
            cin >> e;
            um[e] ++;
        }

        int groups = 0;
        int left = 0;

        for(auto &e : um)
        {
            e.second += left;
            groups += e.second / e.first;
            left = e.second - (e.first * (e.second / e.first));
        }

        cout << groups << endl;

    }
}
