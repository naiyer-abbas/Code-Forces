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
        string n;
        cin >> n;

        if(n.size() == 1)
        {
            cout << n << endl;
            continue;
        }

        int digits = n.size();

        int64_t ans = 0;

        if(n.at(0) != '0')
        {
            ans = ((digits - 1) * 9) + (n.at(0) - 49);
        }

        else
        {
            ans = (digits - 1) * 9;
        }


        int br = 0;

        if(digits > 1)
        {
            if(n.at(1) > n.at(0))
            {
                ans ++;
            }

            else if(n.at(1) == n.at(0))
            {
                int i = 2;
                while(i < digits)
                {
                    if(n.at(i) < n.at(0))
                    {
                        br = 1;
                        break;
                    }

                    if(n.at(i) > n.at(0))
                    {
                        br = 0;
                        break;
                    }

                    i ++;
                }

                if(!br)
                {
                    ans ++;
                }
            }
        }

        cout << ans << endl;
    }
}
