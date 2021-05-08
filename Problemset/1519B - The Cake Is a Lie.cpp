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
        int n, m, k;
        cin >> n >> m >> k;

        ll ans1 = n - 1;
        ll ans2 = n * (m - 1);

        ll sum = ans1 + ans2;

        if(sum == k)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
