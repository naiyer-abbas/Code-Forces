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
        vector <int> ones;
        vector <int> zeroes;

        int cnt_1 = 0, cnt_0 = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == '1')
            {
                ones.pb(i);
                cnt_1 ++;
            }

            else
            {
                zeroes.pb(i);
                cnt_0 ++;
            }
        }

        if(cnt_1 == 0)
        {
            cout << 1 << endl;
            continue;
        }

        if(cnt_0 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        // i table

        map <int, int> itable;

        itable[1] = ones.at(0);

        int ans;

        int i = 2;


        while(1)
        {
            if(itable[i / 2] >= zeroes.at(zeroes.size() - 1))
            {
                ans = i;
                break;
            }

            if(itable[i / 2] >= ones.at(ones.size() - 1))
            {
                ans = i + 1;
                break;
            }



            int ub1 = *upper_bound(zeroes.begin(), zeroes.end(), itable[i / 2]);
            int ub2 = *upper_bound(ones.begin(), ones.end(), itable[i / 2]);

            if(ub1 + 1>= ub2)
            {
                itable[i] = ub1;
            }

            else
            {
                itable[i + 1] = ub2;
            }

            i += 2;
        }

        string res;

        while(ans)
        {
            if(ans % 2)
            {
                res.pb('1');
            }

            else
            {
                res.pb('0');
            }

            ans /= 2;
        }

        reverse(res.begin(), res.end());

        cout << res << endl;
    }

}
