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
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char prev = s.at(0);

        unordered_map <char, int> um;
        um[s.at(0)] ++;

        int br = 0;

        for(int i = 1; i < n; i++)
        {
            um[s.at(i)] ++;
            if(um[s.at(i)] > 1 && prev != s.at(i))
            {
                br = 1;
                cout << "NO" << endl;
                break;
            }

            prev = s.at(i);
        }

        if(!br)
        {
            cout << "YES" << endl;
        }
    }
}
