#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fast ios_base :: sync_with_stdio(0); cin.tie(0);

vector <ll> divisors(ll);
ll solve(ll);

ll is_divisor(ll a , ll b);

int main()
{
    fast;
    int T;
    cin >> T;

    while(T)
    {
        ll d;
        vector <ll> divisors;
        cin >> d;

        cout << solve(d) <<endl;



        T--;
    }
}

vector <ll>  divisors(ll n)
{
    vector <ll> d;
    for(ll i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            d.pb(i);

        if(d.size() == 3)
                break;
    }
    d.pb(n);
    sort(d.begin(), d.end());
    return d;
}

ll solve(ll b)
{
   for(ll i = b * b;   i < 10000000; i++)
   {
       if(divisors(i).at(1) - 1 >= b    &&   divisors(i).at(2) - divisors(i).at(1) >=b)
       {
           return i;
           break;
       }
   }
}


ll is_divisor(ll a , ll b)
{
    if(a % b == 0)
        return 1;

    else
        return 0;
}
