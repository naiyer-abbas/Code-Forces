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

ll dp[5001];

ll min_steps(vector <int> &v, int n, int N)
{
    if(v.at(i) == 0)
    {
        return min()
    }
}

int main()
{
    fast
    int n;
    cin >> n;
    vector <int> v(n);
    memset(dp, -1, sizeof(dp));

    for(auto &e : v)
    {
        cin >> e;
    }

    ll x = min_steps(v, n, n);
    cout << x;
}
