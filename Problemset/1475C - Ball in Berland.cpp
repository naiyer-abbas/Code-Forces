#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

ll printNcR(int n, int r);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int a, bb, k;
        cin >> a >> bb >> k;

        vector <ll> b(k);
        vector <ll> g(k);

        vector <ll> brr(a + 1, 0);
        vector <ll> grr(bb + 1, 0);

        //set <int> sb;
        //set <int> sg;

        for(auto &e : b)
        {
            cin >> e;
            brr[e] ++;
        }

        for(auto &e : g)
        {
            cin >> e;
            grr[e] ++;
        }

        ll b_clash = 0;

        for(int i = 1; i < brr.size(); i++)
        {
            if(brr[i] > 1)
            {
                b_clash += ((brr[i] * (brr[i] - 1)) / 2);
            }
        }

        ll g_clash = 0;

        for(int i = 1; i < grr.size(); i++)
        {
            if(grr[i] > 1)
            {
                g_clash += ((grr[i] * (grr[i] - 1)) / 2);
            }
        }

        ll ans = printNcR(k , 2) - (b_clash + g_clash);

        cout << ans << endl;
    }
}

ll printNcR(int n, int r)
{
    if(n < r)
    {
        return 0;
    }

    if(n == r)
    {
        return 1;
    }

    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }

    }

    else
        p = 1;
    return p;
}
