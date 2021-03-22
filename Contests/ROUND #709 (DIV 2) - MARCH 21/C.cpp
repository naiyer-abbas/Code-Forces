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
    int t ;
    cin >> t;
    while(t --)
    {
        int n, m;
        cin >> n >> m;

        int limit;
        if(m % 2)
        {
            limit = (m / 2) + 1;
        }

        else
        {
            limit = m / 2;
        }

        map <int, int, greater <int>> um;

        int temp;

        while(m --)
        {
            int k;
            cin >> k;
            while(k --)
            {
                cin >> temp;
                um[temp] ++;
            }
        }

        int left = m;

        vector <int> ans;

        for(auto &e : um)
        {
            if(e.second > limit && left >= limit)
            {
                left -= limit;
                e.second -= limit;
                ans.pb(e.second);
                if(left == 0)
                {
                    break;
                }
            }

            else if(e.second <= limit && left >= limit)
            {
                left -= e.second;
                e.second = 0;

                if(left == 0)
                {
                    break;
                }
            }

            else if(e.second > limit && left < limit)
            {
                e.second -= left;
                break;
            }

            else if(e.second <= limit && left < limit)
            {
                left -= min(left, e.second);
                if(left == 0)
                {
                    break;
                }
            }
        }
    }
}
