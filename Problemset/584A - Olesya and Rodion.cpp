#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n, t;
    cin >> n >> t;
    if(n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }
    vector <int> v;

    if(t != 10)
    {
        v.pb(t);
        for(int i = 0; i < n - 1; i++)
        {
            v.pb(0);
        }

        for(auto &e : v)
        {
            cout << e;
        }
        return 0;
    }

    if(t == 10)
    {
        v.pb(10);
        for(int i = 0; i < n - 2; i++)
        {
            v.pb(0);
        }
        for(auto &e : v)
        {
            cout << e;
        }
        return 0;
    }


}
