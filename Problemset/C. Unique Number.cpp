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
    while(t --)
    {
        int x;
        cin >> x;

        set <int> s;

        int i = 9;
        int xc = x;

        while(1)
        {
            s.insert(min(i, xc));
            xc -= i;
            if(xc <= 0)
            {
                break;
            }

            i --;
        }

        if(s.size() > 9)
        {
            cout << -1 << endl;
        }

        else
        {
            for(auto &e : s)
            {
                cout << e;
            }
            cout << endl;
        }
    }
}
