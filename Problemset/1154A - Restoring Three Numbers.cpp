#include <bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0);    cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

int main()
{
    fast;
    ll p, q, r, s;
    ll a, b, c;
    cin >> p >> q >> r >> s;
    vector <ll> num;

    num.pb(p);  num.pb(q);  num.pb(r);  num.pb(s);
    sort(num.begin(), num.end());

    c = num.at(3) - num.at(2);
    b = num.at(3) - num.at(1);
    a = num.at(3) - num.at(0);

    cout << a <<" " <<  b << " " << c;

    return 0;





}
