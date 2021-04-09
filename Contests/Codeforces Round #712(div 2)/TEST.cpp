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

vector <string> dp;

string min_s(string s1, string s2)
{
    if(s1.size() < s2.size())
    {
        return s1;
    }

    else if(s1.size() > s2.size())
    {
        return s2;
    }

    else
    {
        return min(s1, s2);
    }
}

string solve(vector <int> ones, vector <int> zeroes, int i, string s)
{
    if(dp[i] != "77")
    {
        return dp[i];
    }

    if(i == zeroes.at(zeroes.size() - 1))
    {
        if(s.at(i) == '1')
        return dp[i] =  "10";

        else
        {
            return dp[i] =  "00";
        }
    }

    if(i == ones.at(ones.size() - 1))
    {
        if(i > zeroes.at(zeroes.size() - 1))
        {
            if(s.at(i) == '0')
            {
                return dp[i] =  "00";
            }

            else
            {
                return dp[i] =  "10";
            }
        }

        else
        {
            if(s.at(i) == '0')
            {
                return dp[i] =  "01";
            }

            else
            {
                return dp[i] = "11";
            }
        }
    }

    if(s.at(i) == '1')
    {
        if(i > zeroes.at(zeroes.size() - 1))
        {
            return dp[i] = "10";
        }

        if(i > ones.at(ones.size() - 1))
        {
            return dp[i] = "11";
        }

        int lb_z = *lower_bound(zeroes.begin(), zeroes.end(), i);



        int up_o = *upper_bound(ones.begin(), ones.end(), i);

        return dp[i] = (min_s("1" + solve(ones, zeroes, up_o, s), "1" + solve(ones, zeroes, lb_z, s)));
    }

    else
    {
        if(i > zeroes.at(zeroes.size() - 1))
        {
            return "00";
        }

        if(i > ones.at(ones.size() - 1))
        {
            return "01";
        }

        int up_z = *upper_bound(zeroes.begin(), zeroes.end(), i);



        int lb_o = *lower_bound(ones.begin(), ones.end(), i);

        return dp[i] = (min_s("0" + solve(ones, zeroes, lb_o, s), "0" + solve(ones, zeroes, up_z, s)));
    }
}

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

        dp.assign(s.size(), "77");

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

        cout << solve(ones, zeroes, ones.at(0), s) << endl;

    }
}
