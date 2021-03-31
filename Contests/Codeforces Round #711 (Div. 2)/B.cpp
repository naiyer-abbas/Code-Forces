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
        ll n, w;
        cin >> n >> w;

        vector <ll> v(n);

        map<ll, ll> um;

        for(auto &e : v)
        {
            cin >> e;
            um[e] ++;
        }

        sort(v.begin(), v.end());

        ll width = w;
        ll h = 1;
        int rem = n;

        while(rem)
        {
            if(width == w)
            {
                h ++ ;
            }

            ll x = log2(width);
            ll temp = (int) pow(2, x);

            int br = 0;

            while(temp != 0 && (um.find(temp) == um.end() || um[temp] == 0))
            {
                temp = temp / 2;
                if(temp == 0)
                {
                    width = w;
                    br = 1;
                    break;
                }
            }

            if(!br)
            {
                width -= temp;
                if(width == 0)
                {
                    width = w;
                }
                um[temp] --;
                rem --;
            }
        }

        cout << h - 1 << endl;
    }
}
