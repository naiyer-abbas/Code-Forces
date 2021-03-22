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
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(is_sorted(s.begin(), s.end()))
        {
            cout << s << endl;
            continue;
        }

        int last_zero = -1;

        for(int i = n - 1; i >= 0; i--)
        {
            if(s.at(i) == '0')
            {
                last_zero = i;
                break;
            }
        }

        int first_one = -1;

        for(int i = 0; i < n; i++)
        {
            if(s.at(i) == '1')
            {
                first_one = i;
                break;
            }
        }

        if(last_zero == -1 || first_one == -1)
        {
            cout << s << endl;
            continue;
        }

        else if(last_zero == n - 1 && first_one == 0)
        {
            cout << '0' << endl;
            continue;
        }

        else
        {
            for(int i = 0; i < first_one; i++)
            {
                cout << '0';
            }

            for(int i = last_zero; i < n; i++)
            {
                if(i == last_zero)
                {
                    cout << '0';
                }

                else
                cout << '1';
            }
            cout << endl;
        }
    }
}
