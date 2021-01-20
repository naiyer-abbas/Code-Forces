#include<bits/stdc++.h>
using namespace std;


#define ll long long int

bool isprime(ll);



int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  ll n;
  cin >> n;
  while(n)
  {

       ll x;
        cin >> x;

        double t = sqrt(x);
         if(t - int(t) == 0 && t != 1)
         {
             if(isprime(int(t)))
                cout<<"YES"<<endl;

             else
             {
                 cout <<"NO"<<endl;
             }
         }

         else
         {
             cout<<"NO"<<endl;
         }
      n--;
  }

}

bool isprime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}




