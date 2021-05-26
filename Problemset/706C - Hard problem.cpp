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

ll dp[100001][2];

ll solve(vector <string> v, vector <ll> &energy, int n, int rev)
{
    if(dp[n][rev] != -1)
    {
        return dp[n][rev];
    }

    if(n <= 0)
    {
        return dp[n][rev] = 50000;
    }



    if(rev == 0)
    {
        reverse(v.at(n - 1).begin(), v.at(n - 1).end());
    }

    if(is_sorted(v.begin(), v.end()) && rev == 0)
    {
        return dp[n][0] = energy.at(n - 1);
    }

    if(is_sorted(v.begin(), v.end()) && rev)
    {
        return dp[n][1] = 0;
    }


    if(rev == 0)
    {
        ll ans1 = energy.at(n - 1) + solve(v, energy, n - 1, 1);
        ll ans2 = energy.at(n - 1) + solve(v, energy, n - 1, 0);
        return dp[n][0] = min(ans1, ans2);
    }

    ll ans1 = solve(v, energy, n - 1, 1);
    ll ans2 = solve(v, energy, n - 1, 0);

    return dp[n][1] = min(ans1, ans2);
}

int main()
{
    fast
    int n;
    cin >> n;
    vector <ll> energy(n);

    memset(dp, -1, sizeof(dp));

    for(auto &e : energy)
    {
        cin >> e;
    }

    vector <string> v(n);

    for(auto &e: v)
    {
        cin >> e;
    }


    ll x = min(solve(v, energy, n, 1), solve(v, energy, n, 0));
    if(x == INT_MAX)
    {
        cout << -1;
    }

    else
    {
        cout << x;
    }

    //cout << dp[n][0];

}
