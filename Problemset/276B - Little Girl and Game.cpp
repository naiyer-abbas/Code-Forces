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
    string s;
    cin >> s;

    map <char, int> um;

    for(auto &e : s)
    {
        um[e] ++;
    }

    int c1 = 0, c2 = 0;

    for(auto &e : um)
    {
        if(e.second & 1)
        {
            c1 ++;
        }

        else
        {
            c2 ++;
        }
    }

    if(c1 == 0 || c1 & 1)
    {
        cout << "First" << endl;
    }

    else
    {
        cout << "Second" << endl;
    }
}
