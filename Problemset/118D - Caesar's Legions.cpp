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
#define MOD 100000000

ll dp[101][101][12][12];

ll solve(int n1, int n2, int k1, int k2, int x1, int x2)
{
    if(dp[n1][n2][x1][x2] != -1)
    {
        return (dp[n1][n2][x1][x2]) % MOD;
    }

    if(x1 > k1 || x2 > k2)
    {
        return dp[n1][n2][x1][x2] = 0;
    }

    if(n1 <= 0 && n2 <= 0)
    {
        return dp[n1][n2][x1][x2] = 1;
    }

    if(n1 && n2 && x1 <= k1 && x2 <= k2)
    {
        return dp[n1][n2][x1][x2] = (solve(n1 - 1, n2, k1, k2, x1 + 1, 0) % MOD + solve(n1, n2 - 1, k1, k2, 0, x2 + 1) % MOD) % MOD;
    }

    if(n1 && n2 && x1 < k1 && x2 == k2)
    {
        return dp[n1][n2][x1][x2] = solve(n1 - 1, n2, k1, k2, x1 + 1, 0) % MOD;
    }

    if(n1 && n2 && x1 == k1 && x2 < k2)
    {
        return dp[n1][n2][x1][x2] = solve(n1, n2 - 1, k1, k2, 0, x2 + 1) % MOD;
    }

    if(n1 <= 0 && n2 && x2 <= k2)
    {
        return dp[n1][n2][x1][x2] = solve(n1, n2 - 1, k1, k2, 0, x2 + 1) % MOD;
    }

    if(n1 <= 0 && n2 && x2 > k2)
    {
        return dp[n1][n2][x1][x2] = 0;
    }

    if(n2 <= 0 && n1 && x1 < k1)
    {
        return dp[n1][n2][x1][x2] = solve(n1 - 1, n2, k1, k2, x1 + 1, 0) % MOD;
    }


    if(n2 <= 0 && n1 && x1 > k1)
    {
        return dp[n1][n2][x1][x2] = 0;
    }


}

int main()
{
    fast
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof(dp));
    cout << solve(n1, n2, k1, k2, 0, 0) % MOD;
}
