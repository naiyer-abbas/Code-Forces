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

ll memo[101][2]; // Memoization Table

ll numberOfPaths(ll n, ll k, ll d, ll ok)
{
    if(n == 0 && ok == 1)
    {
        return 1;
    }

    else if(n == 0 && ok == 0)
    {
        return 0;
    }

    if(n < 0)
    {
        return 0;
    }

   if(memo[n][ok] != -1)
    {
        return memo[n][ok];
    }


    ll sum = 0;

    for(ll i = 1; i <= k && i <= n; i++)
    {
        if(ok == 1)
        {
            sum += ((numberOfPaths(n - i, k, d, 1)) % MOD);
        }

        else
        {
            if(i >= d)
            {
                sum += ((numberOfPaths(n - i, k, d, 1)) % MOD);
            }

            else
            {
                sum += ((numberOfPaths(n - i, k, d, 0)) % MOD);
            }
        }
    }
    return memo[n][ok] =  sum % MOD;

}

int main()
{
    fast
    ll n, k, d;
    cin >> n >> k >> d;
    memset(memo, -1, sizeof(memo));
    cout << numberOfPaths(n, k, d, 0);
}
