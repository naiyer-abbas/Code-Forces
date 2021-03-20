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
    while(t --)
    {
        string s;
        cin >> s;

        int br= 0;

        bool adj_0 = false;
        bool adj_1 = false;

        if(is_sorted(s.begin(), s.end()))
        {
            cout << "YES" << endl;
            continue;
        }

        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s.at(i) == '0' && s.at(i + 1) == '0')
            {
                br = 1;
                adj_0 = true;
                break;
            }
        }

        if(!br)     // if no adjacent zeroes are present
        {
            cout << "YES" << endl;
            continue;
        }

        br = 0;

        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s.at(i) == '1' && s.at(i + 1) == '1')
            {
                br = 1;
                adj_1 = true;
                break;
            }
        }

        if(!br)     // if no adjacet ones
        {
            cout << "YES" << endl;
            continue;
        }

        int first = -1;

        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s.at(i) == '1' && s.at(i + 1) == '1')
            {
                first = i;
                break;
            }
        }

        int last = -1;

        for(int i = s.size() - 1; i > 0; i--)
        {
            if(s.at(i) == '0' && s.at(i - 1) == '0')
            {
                last = i;
                break;
            }
        }

        if(last > first)      // if adjacent ones are present before adjacent zeroes
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}
