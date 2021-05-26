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
        int64_t n, r;
        cin >> n >> r;

        if(r < n)
        {
            cout << (r * (r + 1)) / 2 << endl;
        }

        else
        {
            cout << ((n - 1) * (n)) / 2 + 1 << endl;
        }

    }
}
