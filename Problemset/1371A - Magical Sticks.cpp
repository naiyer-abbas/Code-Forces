#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll n;
        cin >> n;

        if((n - 1) / 2)
        cout << 1 + (n - 1) / 2 << endl;

        else
        {
            cout << 1 << endl;
        }
    }
}
