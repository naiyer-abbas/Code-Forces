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
        ll s;
        cin >> s;
        ll temp = s;
        ll ans = 0;
        while(temp)
        {
            if(temp < 10)
            {
                ans += temp;
                break;
            }
            ans += (temp / 10) * 10;
            ll x = temp;
            temp = temp - (temp / 10) * 10;
            temp += ((x / 10) * 10) / 10;
        }

        cout << ans << endl;
    }
}
