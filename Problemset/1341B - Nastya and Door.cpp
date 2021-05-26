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
        int n, k;
        cin >> n >> k;
        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        vector <int> peaks(n, 0);

        for(int i = 1; i < n - 1; i++)
        {
            if(v.at(i) > v.at(i - 1) && v.at(i) > v.at(i + 1))
            {
                peaks.at(i) = 1;
            }
        }


        int mx;
        int temp = 0;

        for(int i = 0; i < k; i++)
        {
            if(peaks.at(i))
            {
                temp ++;
            }
        }

        if(peaks.at(k - 1))
        {
            temp --;
        }


        mx = temp;
        int prev = mx;
        int mx_l = 1;

        for(int i = 1; i <= n - k; i++)
        {
            temp = 0;
            if(peaks.at(i + k - 2))
            {
                prev ++;
            }

            if(peaks.at(i))
            {
                prev --;
            }

            if(prev > mx)
            {
                mx_l = i + 1;
            }

            mx = max(prev, mx);

        }

        cout << mx + 1 << " " << mx_l << endl;
    }
}
