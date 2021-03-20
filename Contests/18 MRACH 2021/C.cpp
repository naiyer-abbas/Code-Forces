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
        int n;
        cin >> n;
        vector < ll > v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        ll min_r, min_u, sum_r, sum_u, cost_r, cost_u, ans;

        min_r = 1000000000001;
        min_u = 1000000000001;
        sum_r = 0;
        sum_u = 0;

        vector <ll> up;
        vector <ll> right;

        for(int i = 0; i < n; i ++)
        {
            if(i % 2)
            {
                right.pb(v.at(i));
            }

            else
            {
                up.pb(v.at(i));
            }
        }

        vector <ll> ans_u;
        vector <ll> ans_r;

        // This one is for upward movement

        for(int i = 0; i < up.size(); i++)
        {
            if(i == 0)
            {
                min_u = up.at(i);
                sum_u = 0;
                cost_u = n * up.at(i);
                ans_u.pb(cost_u);
                continue;
            }

            if(up.at(i) < min_u)
            {
                sum_u += min_u;
                min_u = up.at(i);
                cost_u = (n - i) * up.at(i) + sum_u;
                ans_u.pb(cost_u);
            }

            else
            {
                sum_u += up.at(i);
                cost_u = ((n - i) * min_u) + sum_u;
                //sum_u += up.at(i);
                ans_u.pb(cost_u);
            }
        }


        // This one is for right movement


        for(int i = 0; i < right.size(); i++)
        {
            if(i == 0)
            {
                min_r = right.at(i);
                sum_r = 0;
                cost_r = n * right.at(i);
                ans_r.pb(cost_r);
                continue;
            }

            if(right.at(i) < min_r)
            {
                sum_r += min_r;
                min_r = right.at(i);
                cost_r = (n - i) * right.at(i) + sum_r;
                ans_r.pb(cost_r);
            }

            else
            {
                sum_r += right.at(i);
                cost_r = ((n - i) * min_r) + sum_r;
                ans_r.pb(cost_r);
            }
        }

        ull res = 0xffffffffffffffff;
        ull cost;

        if(n % 2)
        {
            for(int i = 0; i < ans_u.size(); i++)
            {
                if(i == 0)
                {
                    cost = ans_u.at(i) + ans_r.at(i);
                    res = min(cost, res);
                    continue;
                }

                if(i == ans_u.size() - 1)
                {
                    cost = ans_u.at(i) + ans_r.at(i - 1);
                    res = min(cost, res);
                    continue;
                }

                cost = ans_u.at(i) + ans_r.at(i);
                res = min(cost, res);
                cost = ans_u.at(i) + ans_r.at(i - 1);
                res = min(cost, res);
            }
        }

        else
        {
            for(int i = 0; i < ans_r.size(); i++)
            {
                if(i == ans_r.size() - 1)
                {
                    cost = ans_r.at(i) + ans_u.at(i);
                    res = min(cost, res);
                    continue;
                }

                cost = ans_r.at(i) + ans_u.at(i);
                res = min(cost, res);
                cost = ans_r.at(i) + ans_u.at(i + 1);
                res = min(cost, res);
            }
        }

        cout << res << endl;
    }
}
