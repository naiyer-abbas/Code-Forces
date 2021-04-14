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
        string s;
        cin >> s;

        string sc;

        for(int i = 0; i < s.size(); i++)
        {
            sc.pb('1');
        }

        // 0's from right

        int x = 0;
        int flips = INT_MAX;

        while(x <= s.size() + 1)
        {
            int ans = 0;
            if(x > 0 && x <= s.size())
            {
                sc.at((sc.size() - 1) - (x - 1)) = '0';
            }
            for(int i = 0; i < s.size(); i++)
            {
                if(sc.at(i) != s.at(i))
                {
                    ans ++;
                }
            }

            flips = min(flips, ans);
            x ++;
        }

        string sc2;

        for(int i = 0; i < s.size(); i++)
        {
            sc2.pb('1');
        }

         x = 0;

         while(x <= s.size() + 1)
        {
            int ans = 0;
            if(x >= 0 && x < s.size())
            {
                sc2.at(x) = '0';
            }

            for(int i = 0; i < s.size(); i++)
            {
                if(sc2.at(i) != s.at(i))
                {
                    ans ++;
                }
            }

            flips = min(flips, ans);
            x ++;
        }

        cout << flips << endl;


    }
}
