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

        unordered_map <int, int> um;
        int prev = -1;

        for(auto &e :  v)
        {
            cin >> e;
            if(prev != e)
             um[e] ++;
             prev = e;
        }


        if(um[v.at(n - 1)] > 1 && v.at(0) == v.at(n - 1))
        {
            um[v.at(n - 1)] --;
        }

        int mn = n;

        for(auto &e : um)
        {
            mn = min(e.second, mn);
        }

        if(um.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }


        if(mn == um[v.at(0)] || mn == um[v.at(n - 1)])
        {
            cout << mn << endl;
        }

        else
        {
            cout << mn + 1 << endl;
        }

    }
}
