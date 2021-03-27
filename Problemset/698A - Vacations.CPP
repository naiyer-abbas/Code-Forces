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

int dp[103][4]; // memoization table

int calc_rest(vector <int> v, int n, int curr)  // recursive function
{
    if(n <= 0)
    {
        return 0;
    }

    if(dp[n - 1][curr] != -1)
    {
        return dp[n - 1][curr];
    }

    if(v.at(n - 1) == 0)
    {
        return dp[n - 1][curr] = 1 + calc_rest(v, n - 1, 0);
    }

    if(v.at(n - 1) == 1)
    {
        if(curr == 1)
        {
            return dp[n - 1][curr] = 1 + calc_rest(v, n - 1, 0);
        }

        else
        {
            return dp[n - 1][curr] = calc_rest(v, n - 1, 1);
        }
    }

    if(v.at(n - 1) == 2)
    {
        if(curr == 2)
        {
            return dp[n - 1][curr] = 1 + calc_rest(v, n - 1, 0);
        }

        else
        {
            return dp[n - 1][curr] = calc_rest(v, n - 1, 2);
        }
    }

    if(v.at(n - 1) == 3)
    {
        if(curr == 2)
        {
            return dp[n - 1][curr] =  calc_rest(v, n - 1, 1);
        }

        else if(curr == 1)
        {
            return dp[n - 1][curr] =  calc_rest(v, n - 1, 2);
        }

        else
        {
            return dp[n - 1][curr] =  min(calc_rest(v, n - 1, 1), calc_rest(v, n - 1, 2));
        }
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));
    fast;
    int n;
    cin >> n;

    vector <int> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    int rest = 0;
    int curr = 0;
    reverse(v.begin(), v.end());

   cout << calc_rest(v, n, curr);
}
