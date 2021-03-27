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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        int ones = 0, twos = 0;

        for(auto &e : v)
        {
            cin >> e;
            if(e == 1)
            {
                ones ++;
            }

            else
            {
                twos ++;
            }
        }

        ll sum = accumulate(v.begin(), v.end(), 0);
        if(sum % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        else if(ones == 0 && twos % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        else
        {
            cout << "YES" << endl;
            continue;
        }
    }
}
