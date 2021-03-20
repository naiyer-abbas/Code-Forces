#pragma GCC optimize("O2")
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
    while( t--)
    {
        string s;
        cin >> s;

        int mx = 0;
        int temp = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == 'L')
            {
                temp ++;
            }

            else
            {
                mx = max(temp, mx);
                temp = 0;
            }

            if(i == s.size() - 1)
            {
                mx = max(temp, mx);
            }

        }

        cout << mx + 1 << endl;
    }
}
