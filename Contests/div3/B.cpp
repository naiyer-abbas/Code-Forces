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
    fast;
    int  t;
    cin >> t;
    while( t--)
    {
        int arr[51] = {};
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector <int> v;

        for(int i = 0; i < n; i++)
        {
            if(s.at(i) == '*')
            {
                v.pb(i);
            }
        }

        if(v.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if(v.size() == 2)
        {
            cout << 2 << endl;
            continue;
        }

        if(v.at(v.size() - 1) - v.at(0) <= k)
        {
            cout << 2 << endl;
            continue;
        }

       vector <int> ans;
       ans.pb(v.at(0));

       for(int i = 0; i < ans.size(); i++)
       {
           int test = binary_search(v.begin(), v.end(), ans.at(i) + k);

           if(test)
           {
               ans.pb(ans.at(i) + k);
           }

           else
           {
               int l = lower_bound(v.begin(), v.end(), ans.at(i) + k) - v.begin();
               ans.pb(v.at(l - 1));
           }

           if(ans.at(ans.size() - 1) == v.at(v.size() - 1))
           {
               break;
           }
       }

       cout << ans.size() << endl;
    }
}
