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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int z = 0;
        for(int i = 0; i < n; i++)
        {
            if(s.at(i) == '0')
            {
                z ++;
            }
        }

        if(z == 1 || z == 2)
        {
            cout << "BOB" << endl;
            continue;
        }

        int alice = 0, bob = 0;

        if(n % 2 && s[n / 2] == '0')
        {
            cout << "ALICE" << endl;
            continue;
        }

        else
        {
            cout << "BOB" << endl;
            continue;
        }

        cout << "BOB" << endl;
    }
}