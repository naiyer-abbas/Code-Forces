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
        long double p, a, b, c;
        cin >> p >> a >> b >> c;
         ull temp1 = (ceil(p / a) * a) - p ;
         ull temp2 = (ceil(p / b) * b) - p;
         ull temp3 = (ceil(p / c) * c) - p;

         if(temp1 <= temp2 && temp1 <= temp3)
         {
             cout << temp1 << endl;
         }

         else if(temp2 <= temp1 && temp2 <= temp3)
         {
             cout << temp2 << endl;
         }

         else
         {
             cout << temp3 << endl;
         }

    }
}
