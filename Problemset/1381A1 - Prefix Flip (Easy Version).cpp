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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        vector <int> flips;

        for(int i = 0; i < n; i++)
        {
            if(a.at(i) != b.at(i))
            {
                for(int j = 0; j <= i; j++)
                {
                    a.at(j) = 1 - a.at(j);  // flip all
                }

                reverse(a.begin(), a.begin() + i);

                flips.pb(i + 1);

                cnt ++;

                a.at(0) = 1 - a.at(0);

                flips.pb(1);

                cnt ++;

               // cout << 1 << endl;

                for(int j = 0; j <= i; j++)
                {
                    a.at(j) = 1 - a.at(j);  // flip all
                }

                reverse(a.begin(), a.begin() + i);

                flips.pb(i + 1);

                cnt ++;

            }
        }

        cout << cnt << " ";
        for(auto &e : flips)
        {
            cout << e << " ";
        }

        cout << endl;
    }
}
