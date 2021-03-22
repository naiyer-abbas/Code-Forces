#pragma GCC optimize("O2")
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
        ll n;
        cin >> n;

        unordered_set <ll> s;

        int br = 0;

       for(ll i = 2; i * i <= n; i++)
       {
            if(!(n % i))
            {
                s.insert(i);
                s.insert(n / i);
            }
       }

       if(s.size() < 3)
       {
           cout << "NO" << endl;
           continue;
       }

       else
       {
           vector <ll> v;
           for(auto &e : s)
           {
               v.pb(e);
           }


           for(int i = 0; i < v.size(); i++)
           {
               for(int j = i + 1; j < v.size(); j++)
               {
                   ll x = v.at(i) * v.at(j);
                   if(x > n)
                   {
                       break;
                   }

                   double temp = double(n) / double(x);
                   if(ceil(temp) == floor(temp) && temp != v.at(i) && temp != v.at(j) && temp > 2)
                   {
                        cout << "YES" << endl;
                        cout << v.at(i) << " " << v.at(j) << " " << setprecision(15) << temp << endl;
                        br = 1;
                        break;
                   }
               }

               if(br)
               {
                   break;
               }
           }

           if(!br)
           {
               cout << "NO" << endl;
           }
       }
    }
}
