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
        vector <ll> v(n);
        map<ll, ll> um;

        for(auto &e : v)
        {
            cin >> e;
            um[e] ++;
        }

        vector <ll> ss;

        for(auto &e : um)
        {
            ss.pb(e.second);
        }

        sort(ss.begin(), ss.end());

        ll sum = accumulate(ss.begin(), ss.end(), 0LL);
        sum -= ss.at(ss.size() - 1);

        if(sum >= ss.at(ss.size() - 1))
        {
            if((sum + ss.at(ss.size() - 1)) % 2)
            {
                cout << 1 << endl;
            }

            else
            {
                cout << 0 << endl;
            }
        }

        else
        {
            cout << ss.at(ss.size() - 1) - sum << endl;
        }


    }
}
