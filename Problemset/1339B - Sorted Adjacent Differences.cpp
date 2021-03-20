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

        sort(v.begin(), v.end());

        vector <ll> ans;

        int i = 0, j = n - 1;

        while(i <= j)
        {
            if(i == j)
            {
                ans.pb(v.at(i));
                break;
            }

            ans.pb(v.at(j));
            ans.pb(v.at(i));
            i ++;
            j --;
        }

        for(auto it = ans.rbegin(); it != ans.rend(); it ++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
