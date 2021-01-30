#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector <int> v;
    v.pb(x1);
    v.pb(x2);
    v.pb(x3);

    sort(v.begin(), v.end());

    cout << (v.at(1) - v.at(0)) + (v.at(2) - v.at(1));
}
