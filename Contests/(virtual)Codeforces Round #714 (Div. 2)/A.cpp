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
        int n, k;
        cin >> n >> k;

        vector <int> v;

        for(int i = 1; i <= n; i++)
        {
            v.pb(i);
        }

        if(k == 0)
        {
            for(auto &e : v)
            {
                cout << e << " ";
            }
            cout << endl;
            continue;
        }

        int i = 1;
        int dmy = 0;
        int br = 0;
        int x = k;

        while( i + 1 < n)
        {
            swap(v.at(i), v.at(i + 1));
            dmy ++;
            i += 2;
            if(dmy == k)
            {
                br = 1;
                break;
            }
        }

        if(dmy != k)
        {
            cout << - 1 << endl;
            continue;
        }

        else
        {
            for(auto &e : v)
            {
                cout << e <<  " ";
            }
            cout << endl;
        }


    }
}
