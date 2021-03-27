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
    int t;
    cin >> t;
    while( t--)
    {
        ll w, h, n;
        cin >> w >> h >> n;

        int sheet = 1;

        while(w % 2 == 0 || h % 2 == 0)
        {
            if(w % 2 == 0)
            {
                sheet *= 2;
                w = w / 2;
            }

            else if(h % 2 == 0)
            {
                sheet *= 2;
                h = h / 2;
            }
        }

        if(sheet >= n)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
