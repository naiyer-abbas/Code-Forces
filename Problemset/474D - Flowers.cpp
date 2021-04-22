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

ll dp[100001];

ll number_of_ways(int k, int n)
{
    if(n == 0)
    {
        return dp[n] = 1;
    }

    if(n < 0)
    {
        return 0;
    }

    if(dp[n] != -1)
    {
        return dp[n] % MOD;
    }

    ll s1 = number_of_ways(k, n - 1) % MOD;
    ll s2 = number_of_ways(k, n - k) % MOD;

    return dp[n] = (s1 + s2) % MOD;
}

int main()
{
    fast
    for(int i = 0; i < 100001; i++)
    {
        dp[i] = -1;
    }



    int t, k;
    cin >> t >> k;
    ll sum = number_of_ways(k, 100000);
    int pref[100001] = {};
    ll temp = 0;

        for(int i = 0; i < 100001; i++)
        {
            temp += dp[i];
            pref[i] = temp % MOD;
        }

    while(t --)
    {
        int a, b;
        cin >> a >> b;
        cout << (pref[b] - pref[a - 1] + MOD) % MOD << endl;

    }
}
