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

ll dp[2005][2005];

ll solve(vector <ll> &v, int i, int j)
{
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if(i == j)
    {
        return dp[i][j] = 0;
    }

    return dp[i][j] = (v.at(j) - v.at(i)) + min(solve(v, i + 1, j), solve(v, i, j - 1));
}


int main()
{
    fast
    int n;
    cin >> n;
    vector <ll> v(n);

    memset(dp, -1, sizeof(dp));

    for(auto &e : v)
    {
        cin >> e;
    }

    sort(v.begin(), v.end());

    cout << solve(v, 0, n - 1);
}
