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

        vector <ll> v(n + 2);
        ll sum = 0;

        for(auto &e : v)
        {
            cin >> e;
            sum += e;
        }

        int ind;
        int br = 0;

        sort(v.begin(), v.end());

        ll s1 = v.at(n + 1);
        sum -= s1;
        ll sc = sum;

        if(n == 1)      // atleast 2 must be equal
        {
            set <ll> s;
            for(auto&e : v)
            {
                s.insert(e);
            }

            if(s.size() == 3)
            {
                cout << -1 << endl;
                continue;
            }
        }

        for(int i = 0; i < n + 1; i++)
        {
            if(sc - v.at(i) == s1)
            {
                ind = i;
                br = 1;
                break;
            }
        }

        if(br)
        {
            for(int i = 0; i < n + 1; i ++)
            {
                if(i != ind)
                {
                    cout << v.at(i) << " ";
                }
            }

            cout << endl;
            continue;
        }

        s1 = v.at(n);

        if(!br)
        {
            for(int i = 0; i <= n; i++)
            {
                if(sc - v.at(i) == s1)
                {
                    ind = i;
                    br = 1;
                    break;
                }
            }
        }

        if(br)
        {
            for(int i = 0 ; i < n; i++)
            {
                cout << v.at(i) << " ";
            }

            cout << endl;
            continue;
        }

        if(!br)
        {
            cout << -1 << endl;
        }
    }
}
