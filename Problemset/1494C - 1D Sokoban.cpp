#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

ll solve(vector <ll> pos, vector <ll> s_pos)
{

}

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n, m;
        cin >> n >> m;

        vector <ll> p_pos;
        vector <ll> n_pos;

        ll temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp > 0)
            {
                p_pos.pb(temp);
            }

            else
            {
                n_pos.pb(-1 * temp);
            }
        }

        vector <ll> pos_special;
        vector <ll> neg_special;

        for(int i = 0; i < m; i++)
        {
            cin >> temp;
            if(temp > 0)
            {
                pos_special.pb(temp);
            }

            else
            {
                neg_special.pb(-1 * temp);
            }
        }
    }
}
