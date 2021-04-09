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

// that player will win who will receive either an odd number, or 2 at the end
// optimal way to play this game : If the number is odd, then divide it by itself...So win.
//                               : If the number is even and greater than 2, then try to find an odd divisor such that (number / divisor) == an even number greater than 2 //

// NOTE : If an even number is divided by an odd divisor, then the result is always even
//          Odd divisors exist for all even numbers except the powers of 2...

int main()
{
    fast
    int t;
    cin >> t;
    while(t --)
    {
        ll n;
        cin >> n;

        if((n % 2 || n == 2) && n != 1)
        {
            cout << "Ashishgup" << endl;
            continue;
        }


        set <ll> s;

        for(int i = 2; i * i <= n; i ++)
        {
            if(n % i == 0)
            {
                if(i % 2)
                {
                    s.insert(i);
                }

                if((n / i) % 2)
                {
                    s.insert(n / i);
                }
            }
        }

        // storing powers of 2 except 2

        set <ll> powers;
        ll x = 4;

        while(x <= n)
        {
            powers.insert(x);
            x *= 2;
        }

        ll nc = n;
        ll turn = 1;

        int br = 0;

            for(auto &e : s)
            {
                if(nc / e != 2 && powers.find(nc / e) != powers.end())
                {
                    br = 1;
                    break;
                }

                if(nc == 2)
                {
                    br = 1;
                    break;
                }
            }

        if(!br)
            {
                turn ++;
            }

        if(turn == 1)
        {
            cout << "Ashishgup" << endl;
        }

        else
        {
            cout << "FastestFinger" << endl;
        }
    }
}
