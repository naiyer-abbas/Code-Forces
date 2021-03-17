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
        vector< pair< int, int> >a;
        int temp1, temp2;
        for(int i = 0; i < n; i++)
        {
            cin >> temp1 >> temp2;
            a.pb(mp(temp1, temp2));
        }

        vector <int> t(n);

        for(auto &e : t)
        {
            cin >> e;
        }

        ll ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                ans = t.at(i) + a.at(i).first;

                if(n == 1)
                {
                    break;
                }

                ans += ceil(((float)a[i].second - (float)a[i].first) / (float)2);
                if(ans < a[i].second)
                {
                    ans += (a[i].second - ans);
                }

                continue;
            }

            if(i == n-1)
            {
                ans += a[i].first - a[i-1].second  +  t.at(i);
                break;
            }
            ans += a[i].first- a[i-1].second + t.at(i);
            ans += ceil(((float)a[i].second- (float)a[i].first)/ 2);
            if(ans <a[i].second)
            {
                ans += (a[i].second - ans);
            }
        }
        cout<< ans <<endl;
    }

}
