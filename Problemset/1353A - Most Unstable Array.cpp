#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t --)
    {
       ll n, m;
       cin >> n >> m;

       if(n == 1)
       {
           cout << 0 << endl;
       }

       else if(n == 2)
       {
           cout << m << endl;
       }

       else
       {
           cout << 2 * m << endl;
       }

    }
}


