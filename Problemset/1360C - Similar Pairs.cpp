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

        vector <int> v(n);
        int c_odd = 0, c_even = 0;

        for(auto &e : v)
        {
            cin >> e;
            if(e % 2)
            {
                c_odd++;
            }

            else
            {
                c_even++;
            }
        }

        sort(v.begin(), v.end());

        if(c_odd % 2 == 0 && c_even % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        int consp = 0;

        for(int i = 0 ; i < v.size() - 1; i++)
        {
            if(v.at(i + 1) - v.at(i) == 1)
            {
                consp ++;
                break;
            }
        }

        if(c_odd % 2 && c_even % 2)
        {
            if(consp)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
                continue;
            }
        }

    }
}
