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
        vector <ll> v(n);
            ll mx =  *max_element(v.begin(), v.end());
            for(int i = 0; i < n; i++)
            {
                if(v.at(i) == mx)
                {
                    if(i > 0 && v.at(i - 1) < mx)
                    {
                        cout << i + 1 << endl;
                        break;
                    }

                    if(i < n - 1 && v.at(i + 1) < mx)
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
     }
}