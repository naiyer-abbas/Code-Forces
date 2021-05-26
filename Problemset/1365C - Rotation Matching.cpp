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
    vector <int> v1(n + 1);
    vector <int> v1_index(n + 1);
    vector <int> v2(n + 1);
    vector <int> v2_index(n + 1);
    vector <int> v3(n + 1); // diff vector

    for(int i = 1; i <= n; i++)
    {
        cin >> v1.at(i);
        v1_index.at(v1.at(i)) = i;
    }

    for(int i = 1; i <= n; i++)
    {
        cin >> v2.at(i);
        v2_index.at(v2.at(i)) = i;
    }

    for(int i = 1; i <= n; i++)
    {
        v3.at(i) = v2_index.at(i) - v1_index.at(i);
        if(v3.at(i) < 0)
        {
            v3.at(i) = v2_index.at(i) + (n - v1_index.at(i));
        }
    }

    unordered_map <int, int> um;

    for(int i = 1; i <= n; i++)
    {
        um[v3.at(i)] ++;
    }

    int mx = 1;

    for(auto &e : um)
    {
        mx = max(e.second, mx);
    }

    cout << mx << endl;
}
