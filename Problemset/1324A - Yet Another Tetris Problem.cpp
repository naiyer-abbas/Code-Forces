#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int  main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        sort(v.begin(), v.end());

        int check = 0;

        for(int i = 1; i < v.size(); i++)
        {
            if((v.at(i) - v.at(i - 1)) % 2)
            {
                check = 1;
                break;
            }
        }

        if(!check)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
