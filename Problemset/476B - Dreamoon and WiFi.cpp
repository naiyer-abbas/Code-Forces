#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007



ll comb(int n, int k)
{

    if(k > n)
    {
        return 0;
    }

    if(k == n || k == 0)
    {
        return 1;
    }

    else
    {
        return (comb(n - 1, k - 1) + comb(n - 1, k));
    }
}

double prob(int n, int length)
{
    return double(comb(length, n)) / double((int)pow(2, length));
}

int main()
{
    fast;
    string s1, s2;
    cin >> s1 >> s2;


    int c1 = 0;

    for(int i = 0 ;i < s1.size(); i++)
    {
        if(s1.at(i) == '+')
        {
            c1 ++;
        }

        else
        {
            c1 --;
        }
    }

    int c2 = 0, q = 0;

    for(int i = 0; i < s2.size(); i++)
    {
        if(s2.at(i) == '+')
        {
            c2 ++;
        }

        else if(s2.at(i) == '-')
        {
            c2 --;
        }

        else
        {
            q ++;
        }
    }


    if(abs(c1 - c2) % 2 && !(q % 2))
    {
        cout << 0.0000000000;
        return 0;
    }

    if(!(abs(c1 - c2) % 2) && q % 2)
    {
        cout << 0.00000000000;
        return 0;
    }


    if(q % 2 == 0)
    {
        cout << setprecision(20) << prob(q / 2 + abs(c1 - c2) / 2, q);
        return 0;
    }

    if(abs(c1 - c2) > q)
    {
        cout << 0.000000000000;
        return 0;
    }

    else
    {
        cout << setprecision(20) << prob((q - abs(c1 - c2)) / 2, q);
    }
}
