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

/*int count_digits(ll n)
{
    int digits = 0;
    ll temp;
    while(n)
    {
        temp = n % 10;
        digits ++;
        n /= 10;
    }
}*/

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        //int digits_of_c = count_digits(c);
        //int digits_of_b = count_digits(b);
        //int digits_of_a = count_digits(a);

        ll num1, num2;

        if(min(a, b) == c)
        {
                num1 = (int64_t)pow(10, a - 1);
                num2 = (int64_t)pow(10, b - 1);

        }

        else
        {
            if(c == 1)
            {
                num1 = (int64_t)pow(10, a - 1);
                num2 = (int64_t)pow(10, b - 1) + 1;
            }

            else
            {
                 num1 = (int64_t)pow(10, a - 1);
                 num2 = (int64_t)pow(10, b - 1);
                 num2 += (int64_t)pow(10, c - 1);
            }
        }

        cout << num1 << " " << num2 << endl;

    }
}
