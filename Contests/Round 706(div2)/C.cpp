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
        int n;
        cin >> n;
        int temp1, temp2;

        vector <int> miner;
        vector <int> mine;

        for(int i = 0; i < 2 * n; i++)
        {
            cin >> temp1 >> temp2;
            if(temp1 == 0)
            {
                if(temp2 > 0)
                miner.pb(temp2);

                else
                    miner.pb(temp2 *-1);
            }

            else
            {
                if(temp1 > 0)
                mine.pb(temp1);

                else
                    mine.pb( temp1 * -1);
            }
        }

        sort(mine.begin(), mine.end());
        sort(miner.begin(), miner.end());

        vector <long double> res;

        for(int i = 0; i < n; i++)
        {
            double a = double(miner.at(i)) * double(miner.at(i));
            double b = double(mine.at(i)) * double(mine.at(i));
            long double ans = sqrtl(a + b);
            res.pb(ans);
        }

        long double ans = 0;

        for(int i = 0; i < res.size(); i++)
        {
            ans += res.at(i);
        }
        cout << setprecision(17) << ans << endl;
    }
}
