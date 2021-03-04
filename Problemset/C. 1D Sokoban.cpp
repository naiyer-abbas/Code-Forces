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
    int t ;
    cin >> t;
    while(t --)
    {
        int n,m;
        cin >> n >> m;
        vector <ll> pos;
        vector <ll> neg;
        vector <ll> special_pos;
        vector <ll> special_neg;
        ll temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp >= 0)
            {
                pos.pb(temp);
            }

            else
            {
                neg.pb(temp * -1);
            }
        }

        for(int i = 0; i < m; i++)
        {
            cin >> temp;
            if(temp >= 0)
            {
                special_pos.pb(temp);
            }

            else
            {
                special_neg.pb(-1 * temp);
            }
        }

        for(int i = pos.size() - 1; i >= 0; i--)
        {
            if(pos.at(i) > special_pos.at(special_pos.size() - 1))
            {
                pos.erase(pos.begin() + i, pos.begin() + i + 1);
            }
        }

        vector <ll> ans;

        for(int i = pos.size() - 1; i >= 0; i--)
        {
            ll x = *lower_bound(special_pos.begin(), special_pos.end(), pos.at(i));
            ll xp = lower_bound(special_pos.begin(), special_pos.end(), pos.at(i)) - special_pos.begin();
            if(pos.at(i) != x)
            {
                ll a = lower_bound(special_pos.begin(), special_pos.end(), x - i) - special_pos.begin();
                ll count = (xp - a) + 1 ;
                ans.pb(count);
            }
        }

        for(auto &e : ans)
        {
            cout << e << " ";
        }
    }
}
