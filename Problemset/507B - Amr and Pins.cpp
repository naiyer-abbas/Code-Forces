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
    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    int dia = 2 * r;

    // in each step centre can move maximum of a diameter

    ll temp1 = (x1 -x2) * (x1 - x2);
    ll temp2 = (y1 - y2) * (y1 - y2);


    ll dis = ceil(sqrt(temp1 + temp2));

    if(dis % dia)
    {
        cout << (dis / dia) + 1;
    }

    else
    {
        cout << dis / dia;
    }
}

