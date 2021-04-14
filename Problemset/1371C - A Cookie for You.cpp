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
        ull a, b, n, m;
        cin >> a >> b >> n >> m;

        if(a + b < n + m)
        {
            cout << "NO" << endl;
            continue;
        }

        ull mn = min(a, b);

        // if a <= b, then 1 will select a chocolate and 2 will select vanilla
        // if a > b, then 1 will select a vanilla and 2 will select chocolate

        if(mn < m)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        //ull mx = max(a, b);

        //ll diff = abs(a - b);


    }
}
