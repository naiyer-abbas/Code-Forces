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

ull sum_of_digits(ull n)
{
    ull sum = 0;
    ull nc = n;

    while(nc)
    {
        ull temp = nc % 10;
        sum += temp;
        nc /= 10;
    }
    return sum;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while( t--)
    {
        ull n;
        cin >> n;

        while(__gcd(n, sum_of_digits(n)) <= 1)
        {
            n ++;
        }

        cout << n << endl;
    }
}
