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
    vector <ll> v1;
    vector <ll> v2;
    ll temp;
    ll sum, sum1, sum2;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    sum = accumulate(v.begin(), v.end(), 0LL);

    for(int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        v1.pb(temp);
    }

    sum1 = accumulate(v1.begin(), v1.end(), 0LL);
    for(int i = 0; i < n - 2; i++)
    {
        cin >> temp;
        v2.pb(temp);
    }

    sum2 = accumulate(v2.begin(), v2.end(), 0LL);

    ll x = sum - sum1;
    ll y = sum1 - sum2;

    cout << x << endl << y;


}
