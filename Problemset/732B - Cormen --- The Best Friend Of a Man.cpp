#pragma GCC optimize("O2")
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
    fast;
    int n, k;
    cin >> n >> k;

    vector <int> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    int cnt = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(v.at(i) + v.at(i + 1) < k)
        {
            cnt += (k - (v.at(i) + v.at(i + 1)));
            v.at(i + 1) += (k - (v.at(i) + v.at(i + 1)));
        }
    }

    cout << cnt << endl;
    for(auto &e : v)
    {
        cout << e << " ";
    }

}
