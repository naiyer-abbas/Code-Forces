#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
    fast
    int t ;
    cin >> t;
    while(t --)
    {
        ll a, b;
        cin >> a >> b;

        if(b == a)
        {
            cout << 0 << endl;
            continue;
        }

        else if(b > a)
        {
            if((b % 2 && a % 2) || (b % 2 == 0 && a % 2 == 0))
            {
                cout << 2 << endl;
            }

            else
            {
                cout << 1 << endl;
            }
        }

        else
        {
            if((b % 2 && a % 2) || (b % 2 == 0 && a % 2 == 0))
            {
                cout << 1 << endl;
                continue;
            }

            else
            {
                cout << 2 << endl;
            }
        }
    }
}
