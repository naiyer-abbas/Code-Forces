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


int lengthen(int a, int b)
{
    a *= 10;
    int x = 0;
    while(x <= 9)
    {
        if((a + x) % b == 0)
        {
            return (a + x);
        }

        x ++;
    }

    return -1;
}


int main()
{
    fast
    int a, b, n;
    cin >> a >> b >> n;

    a = lengthen(a, b);
    if(a == -1)
    {
        cout << -1;
        return 0;
    }

    string aa = to_string(a);
    n--;
    while(n --)
    {
        aa += '0';
    }

    cout << aa;
}
