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
    while (t --)
    {
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
         vector <int> temp;

        set <int> s;

        for(auto &e : v)
        {
            cin >> e;

            if(s.find(e) == s.end())
            {
                temp.pb(e);
            }

            s.insert(e);
        }

        if(s.size() > k)
        {
            cout << - 1 << endl;
            continue;
        }



        if(s.size() < k)
        {
            while(temp.size() < k)
            {
                temp.pb(*s.begin());
            }
        }

        int cnt = 0;

        vector <int> ans;

        while(cnt <= (9999 - n))
        {
            for(auto &e : temp)
            {
                ans.pb(e);
            }

            cnt += temp.size();
        }

        cout << ans.size() << endl;

        for(auto &e: ans)
        {
            cout << e << " ";
        }

        cout << endl;
    }
}
