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
        vector <int> v(n);
        vector <int> odds;
        vector <int> evens;

        for(auto &e : v)
        {
            cin >> e;
            if(e & 1)
            {
                odds.pb(e);
            }

            else
            {
                evens.pb(e);
            }
        }

        vector <int> ans;

        for(auto &e : odds)
        {
            ans.pb(e);
        }

        for(auto &e : evens)
        {
            ans.pb(e);
        }

        for(auto &e : ans)
        {
            cout << e << " ";
        }
        cout << endl;
    }
}
