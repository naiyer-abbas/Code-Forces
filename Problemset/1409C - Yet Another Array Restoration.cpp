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
        int n, x, y;
        cin >> n >> x >> y;

        set <int> factors;

        int p = y - x;

        for(int i = 1; i * i <= p; i++)
        {
            if(p % i == 0)
            {
                factors.insert(i);
                factors.insert(p / i);
            }
        }

        int a = 0;
        int diff;
        int ans = INT_MAX;
        int yc = y;

        int res_a = 0;
        int res_d = 0;

        for(auto &e : factors)
        {
            a = y - ((n - 1) * e);
            if(a <= x && a > 0)
            {
                if(y <= ans)
                {
                    res_a = a;
                    res_d = e;
                    ans = y;
                }
            }

            else if(a <= 0)
            {
                while(a <= 0)
                {
                    yc += e;
                    a = yc - ((n - 1) * e);
                }

                if(yc <= ans)
                {
                    res_a = a;
                    res_d = e;
                    ans = yc;
                }

            }
        }

       while(n --)
       {
           cout << res_a << " ";
           res_a += res_d;
       }
       cout << endl;
    }
}
