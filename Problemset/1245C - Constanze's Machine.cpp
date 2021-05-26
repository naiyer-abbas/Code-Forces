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

ll solve(string &s, int n)
{
    if(n <= 0)
    {
        return 1;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    if(n > 1 && s.at(n - 1) == 'u' && s.at(n - 2) == 'u')
    {
        return dp[n] = solve(s, n - 1) + solve(s, n - 2);
    }

    if(n > 1 && s.at(n - 1) == 'n' && s.at(n - 2) == 'n')
    {
        return dp[n] = solve(s, n - 1) + solve(s, n - 2);
    }

    else
    {
        return dp[n] = solve(s, n - 1);
    }
}

int main()
{
    fast
    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s.at(i) == 'm' || s.at(i) == 'w')
        {
            cout << 0;
            return 0;
        }
    }
    cout << solve(s, s.size());
}
