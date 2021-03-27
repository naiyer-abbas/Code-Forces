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
    int t;
    cin >> t;
    while (t --)
    {
        int n, k;
        cin >> n >> k;

        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        unordered_map <int, int> um;

        for(int i = 0; i < n;  i ++)
        {
            int sum = v.at(i);
            for(int j = i + 1; j <= k && (i + k) < n; j++)
            {
                sum += v.at(j);
                if(j == k)
                {
                    um[i] = sum;
                }

            }

        }


    }
}
