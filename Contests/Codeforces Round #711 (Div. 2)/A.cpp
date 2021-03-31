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

int char_to_num(char c)
{
    return c - 48;
}

ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}

ll reduceB(ll a, string b)
{
    // Initialize result
    ll mod = 0;

    // calculating mod of b with a to make
    // b like 0 <= b < a
    for (int i=0; i < b.size(); i++)
        mod = (mod*10 + b[i] - '0')%a;

    return mod; // return modulo
}


ll gcdLarge(ll a, string b)
{
    ll num = reduceB(a, b);

    return gcd(a, num);
}

int sum(string b)
{
    int a = 0;
    for(int i = 0; i < b.size(); i++)
    {
        a += char_to_num(b.at(i));
    }
    return a;
}



int main()
{
    ll a;
    string b;
    cin >> b;

    a = 0;
    for(int i = 0; i < b.size(); i++)
    {
        a += char_to_num(b.at(i));
    }

    while(gcdLarge(a, b) <= 1)
    {

    }

    return 0;
}
