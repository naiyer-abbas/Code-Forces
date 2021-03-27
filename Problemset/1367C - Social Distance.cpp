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
    while(t --)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector <int> ones;
        ones.pb(-1);

        for(int i = 0; i < n; i++)
        {
            if(s.at(i) == '1')
            {
                ones.pb(i);
            }
        }

        ones.pb(n);

        ll ans = 0;


        for(int i = 1; i < ones.size(); i++)
        {
            int factor = 2 * k;
            ans += ((ones.at(i) - ones.at(i - 1)) / factor) - 1;
        }

        cout << ans << endl;
    }
}
