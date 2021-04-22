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


ll max_teams(int n, int xp)
{
    ll teams = 0;
    if(n + xp  < 3)
    {
        return 0;
    }

    if(n == 0 || xp == 0)
    {
        return 0;
    }

    while((n && xp) && (n > 1 || xp > 1))
    {
        if(n > xp)
        {
            n -= 2;
            xp --;
            teams ++;
        }

        else
        {
            xp -= 2;
            n --;
            teams ++;
        }
    }

    return teams;
}

int main()
{
    fast
    int n, xp;
    cin >> n >> xp;
    cout << max_teams(n, xp);
}

