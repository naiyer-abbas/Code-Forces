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

        ll a = v.at(n - 1);
        ll b = v.at(n - 2);
        ll c = v.at(0);
        ll d = v.at(1);

        ll m1 = a * b + (a - b);
        ll m2 = c * d + (d - c);

        cout << max(m1, m2) << endl;
    }
}
