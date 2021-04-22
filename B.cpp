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
        string s;
        cin >> s;

        int val = 0;

        int m = 0, t = 0;

        for(auto &e : s)
        {
            if(e == 'M')
            {
                m ++;
            }

            else
            {
                t ++;
            }
        }

        if(s.at(0) != 'T' || s.at(n - 1) != 'T')
        {
            cout << "NO" << endl;
            continue;
        }

        if(t != 2 * m)
        {
            cout << "NO" << endl;
            continue;
        }

        int br = 0;

        for(auto &e: s)
        {
            if(e == 'T')
            {
                val ++;
            }

            else
            {
                val --;
            }

            if(val < 0)
            {
                br = 1;
                cout << "NO" << endl;
                break;
            }

            if(val > m)
            {
                br = 1;
                cout << "NO" << endl;
                break;
            }
        }

        if(!br)
        {
            if(val == m)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
