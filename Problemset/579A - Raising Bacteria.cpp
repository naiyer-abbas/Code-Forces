#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll n;
    cin >> n;
    if(n == 1)
    {
        cout << 1;
        return 0;
    }

   double x = log2(n);

   if(ceil(x) == floor(x))
   {
       cout << 1;
       return 0;
   }

   else
   {
       ll temp = n;
       ll ans = 0;

       while(temp)
       {
           if(temp % 2)
           {
               ans ++;
               temp = temp - 1;
           }

           temp = temp / 2;
       }
       cout << ans;
   }
}
