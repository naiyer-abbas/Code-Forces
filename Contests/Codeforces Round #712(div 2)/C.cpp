//#pragma GCC target ("avx2")
//#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007


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
    ///////////////////////////////////

    string ans;

    vector <string> table(s.size() + 1);
    table.at(0) = "10";


    for(int i = 1; i < table.size(); i++)
    {

        if(i == zeroes.at(zeroes.size() - 1))
    {
        if(s.at(i) == '1')
        {
            table[i] =  "10";
            ans += table[i];
            break;
        }


        else
        {
            table[i] =  "00";
            ans += table[i];
            break;
        }
    }
        if(i == ones.at(ones.size() - 1))
        {
            if(i > zeroes.at(zeroes.size() - 1))
            {
                if(s.at(i) == '0')
                {
                     table[i] =  "00";
                     ans += table[i];
                     break;
                }

                else
                {
                    table[i] =  "10";
                    ans += table[i];
                    break;
                }
            }

            else
            {
                if(s.at(i) == '0')
                {
                    table[i] =  "01";
                    ans += table[i];
                    break;
                }

                else
                {
                    table[i] = "11";
                    ans += table[i];
                    break;
                }
            }

        }

        if(s.at(i) == '1')
    {
        if(i > zeroes.at(zeroes.size() - 1))
        {
            table[i] = "10";
            ans += table[i];
            break;
        }

        if(i > ones.at(ones.size() - 1))
        {
            table[i] = "11";
            ans += table[i];
            break;
        }

        int lb_z = *lower_bound(zeroes.begin(), zeroes.end(), i);



        int up_o = *upper_bound(ones.begin(), ones.end(), i);

        table[i] = (min_s("1" + table.at(up_o), "1" + table.at(lb_z)));
    }
   }

   return ans;
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
