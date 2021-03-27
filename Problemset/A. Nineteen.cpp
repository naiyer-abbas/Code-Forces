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
    string s;
    cin >> s;

    int n = 0, i = 0, t = 0, e = 0;

    for(int j = 0; j < s.size(); j++)
    {
        if(s.at(j) == 'n')
        {
            n ++;
        }

        else if(s.at(j) == 'i')
        {
            i ++;
        }

        else if(s.at(j) == 't')
        {
            t ++;
        }

        else if(s.at(j) == 'e')
        {
            e ++;
        }
    }

   if(n % 2 == 0)
   {
       n = max(0,(n / 2) - 1);
   }

   else
   {
       n = n / 2;
   }
    e = e / 3;

    cout << min(min(n, e), min(i, t));
}
