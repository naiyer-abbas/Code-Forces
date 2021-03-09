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
        ll n, k;
        cin >> n >> k;
        ll temp = n - k;
        ll c = 0;
        if(n - k < 0)
        {
            c = -1 * temp;
            temp = 0;
        }

        if(temp % 2)
        {
            c ++;
        }

        cout << c << endl;
    }
}
