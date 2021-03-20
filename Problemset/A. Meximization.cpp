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

        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        sort(v.begin(), v.end());

        set <int> s;
        vector <int> vv;

       for(int i = 0; i < n; i++)
       {
           if(s.find(v.at(i)) == s.end())
           {
               s.insert(v.at(i));
           }

           else
           {
               vv.pb(v.at(i));
           }
       }

        for(auto &e : s)
        {
            cout << e << " ";
        }

        for(auto &e : vv)
        {
            cout << e << " ";
        }

        cout << endl;
    }
}
