#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);



int main()
{
    fast;
    int n;
    cin >> n;
    vector <ll> v;
    ll temp;
    v.pb(0);

    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        v.pb(temp + v.at(i - 1));
    }

    int m;
    cin >> m;

    while(m --)
    {
        cin >> temp;
        cout << lower_bound(v.begin(), v.end(), temp) - v.begin() << endl;
    }
}
