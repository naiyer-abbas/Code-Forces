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

        if(n >= 4)
        {
           if(s.at(0) == '2' && s.at(1) == '0' && s.at(2) == '2' && s.at(3) == '0')
           {
               cout << "YES" << endl;
               continue;
           }

           if(s.at(n - 1) == '0' && s.at(n - 2) == '2' && s.at(n - 3) == '0' && s.at(n - 4) == '2')
           {
               cout << "YES" << endl;
               continue;
           }

           if(s.at(0) == '2' && s.at(1) == '0' && s.at(2) == '2' && s.at(n - 1) == '0')
           {
               cout << "YES" << endl;
               continue;
           }

           if(s.at(0) == '2' && s.at(1) == '0' && s.at(n - 2) == '2' && s.at(n - 1) == '0')
           {
               cout << "YES" << endl;
               continue;
           }

           if(s.at(0) == '2' && s.at(n - 3) == '0' && s.at(n - 2) == '2' && s.at(n - 1) == '0')
           {
               cout << "YES" << endl;
               continue;
           }

           cout << "NO" << endl;
           continue;

        }
        cout << "NO" << endl;
        continue;
    }
}
