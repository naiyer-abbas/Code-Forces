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
    int t ;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        vector <int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v.at(i);
        }

        vector <int> rec;

        int m = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            m = max(m, v.at(i));

            if(m > 0)
            {
                rec.pb(1);
                m --;
            }

            else
            {
                rec.pb(0);
            }

        }

        for(int i = n - 1; i >= 0; i--)
        {
            cout << rec.at(i) << " ";
        }

        cout << endl;

    }
}

