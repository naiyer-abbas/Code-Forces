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

int LCSubStr(string s1, string s2)
{

    int LCSuff[s1.size() + 1][s2.size() + 1];
    int result = 0;
    for (int i = 0; i <= s1.size(); i++)
    {
        for (int j = 0; j <= s2.size(); j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (s1[i - 1] == s2[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int ss = LCSubStr(s1, s2);
        cout << (s1.size() - ss) + (s2.size() - ss) << endl;
    }
}
