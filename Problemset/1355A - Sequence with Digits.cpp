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
        ull a1;
        ull k;
        cin >> a1 >> k;
        ull num = a1;
        ull temp;

        ull mx = 0;
        ull mn = 9;

        while(-- k)
        {
            num = a1;
            mx = 0;
            mn = 9;
            while(num)
            {
                temp = num % 10;
                mn = min(mn, temp);
                mx = max(mx, temp);
                num /= 10;
            }

            a1 += (mx * mn);

            if(mx == 0 || mn == 0)
            {
                break;
            }
        }

        cout << a1 << endl;
    }
}
