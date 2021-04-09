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
    int n;
    cin >> n;

    vector <ll> v(n);

    for(auto&e : v)
    {
        cin >> e;
    }

    sort(v.begin(), v.end());

    ull sum = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(v.at(i) >= sum)
        {
            sum += v.at(i);
            cnt ++;
        }
    }

    cout << cnt << endl;
}
