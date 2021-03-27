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
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll n;
        cin >> n;

        if(n % 2 == 0)
        {
            cout << n / 2 << " " <<  n / 2 << endl;
            continue;
        }

        ll minprime = n - 1;
        ll nc = n;

        for(int i = 3; i * i <= n; i += 2)
        {
            if(n % i == 0)
            {
                minprime = i;
                break;
            }
        }

        cout << (nc / minprime) << " " << nc - (nc / minprime) << endl;
    }
}
