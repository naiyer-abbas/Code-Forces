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
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n, x;
        cin >> n >> x;
        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        int sum = accumulate(v.begin(), v.end(), 0);

        int sumc = sum;

        if(sum % x)
        {
            cout << n << endl;
            continue;
        }

        int cnt = n;
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            if(v.at(i) % x)
            {
                cnt --;
                ans = max(ans, cnt);
                break;
            }

            else
            {
                cnt --;
                sum -= v.at(i);
            }
        }

        sum = sumc;
        cnt = n;

        for(int i = n - 1; i >= 0; i--)
        {
            if(v.at(i) % x)
            {
                cnt --;
                ans = max(ans, cnt);
                break;
            }

            else
            {
                cnt --;
                sum -= v.at(i);
            }
        }

        cout << ans << endl;


    }
}
