#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

//int dp[5001][5001];

int lps(vector <int> v, vector <int> vr, int n, int m)
{
    int dp[n + 1][m + 1];

    memset(dp, 0, sizeof(dp));

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < m + 1; j++)
        {
            if(v.at(i - 1) == vr.at(j - 1))
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }

            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];

}

int main()
{
    fast;
    int t;
    cin >> t;
    while( t--)
    {
        //memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        vector <int> v(n);

       for(auto &e : v)
       {
           cin >> e;
       }

        vector <int> vr = v;

        reverse(vr.begin(), vr.end());

        if(lps(v, vr, n, n) >= 3)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

    }
}
