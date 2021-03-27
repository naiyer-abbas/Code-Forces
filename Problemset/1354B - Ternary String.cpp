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
    while(t --)
    {
        string s;
        cin >> s;

        vector <int> v1, v2, v3;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == '1')
            {
                v1.pb(i + 1);
            }

            else if(s.at(i) == '2')
            {
                v2.pb(i + 1);
            }

            else
            {
                v3.pb(i + 1);
            }
        }

        if(v1.empty() || v2.empty() || v3.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());

        int i = 0, j = 0, k = 0;

        int ans = s.size();

        int mx = 0, mn = s.size();

        while(i < v1.size() && j < v2.size() && k < v3.size())
        {
            mx = max(max(v1.at(i), v2.at(j)), v3.at(k));
            mn = min(min(v1.at(i), v2.at(j)), v3.at(k));
            int res = mx - mn;
            ans = min(res, ans);
            if(mn == v1.at(i))
            {
                i++;
            }

            else if(mn == v2.at(j))
            {
                j ++;
            }

            else if(mn == v3.at(k))
            {
                k ++;
            }
        }
        cout << ans + 1<< endl;
    }
}
