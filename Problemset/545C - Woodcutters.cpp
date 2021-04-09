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

    vector <pair <ll , ll> > v(n);

    for(auto &e : v)
    {
        cin >> e.first >> e.second;
    }

    sort(v.begin(), v.end());

    int cnt = 2;

    for(int i = 1; i < n - 1; i++)
    {
        if(v.at(i).first - v.at(i - 1).first > v.at(i).second)
        {
            cnt ++;
        }

        else if(v.at(i + 1).first - v.at(i).first > v.at(i).second)
        {
            cnt ++;
            v.at(i).first += (v.at(i).second);
        }
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    cout << cnt << endl;
}
