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
    int  t;
    cin >> t;
    while( t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll x = s / n;

        if(b >= s)
        {
            cout << "YES" << endl;
            continue;
        }

       if(x <= a && s % n <= b)
       {
           cout << "YES" << endl;
           continue;
       }

       else
       {
           ll mn = min(a, x);
           if(s - (mn * n) <= b)
           {
               cout << "YES" << endl;
           }

           else
           {
               cout << "NO" << endl;
           }
       }
    }
}
