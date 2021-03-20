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
        vector <ll> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        // finding the length of consecutive ones

        ll ones = 0;

        for(int i = 0; i < n; i++)
        {
            if(v.at(i) == 1)
            {
                ones ++;
                continue;
            }

            if(v.at(i) != 1)
            {
                break;
            }
        }

        if(ones == n && n % 2)
        {
            cout << "First" << endl;
            continue;
        }

        if(ones == n && n % 2 == 0)
        {
            cout << "Second" << endl;
            continue;
        }

        if(ones % 2 == 0)
        {
            cout << "First" << endl;
        }

        else
        {
            cout << "Second" << endl;
        }
    }
}
