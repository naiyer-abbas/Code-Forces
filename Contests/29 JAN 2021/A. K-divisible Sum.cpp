#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t --)
    {

        ll n, k;
        cin >> n >> k;

        if(n == k)
        {
            cout << 1 << endl;
        }

        else if(n == 1)
        {
            cout << k << endl;
        }

        else
        {
            if(k > n)
            {
                if(k % n != 0)
                {
                    cout << (k / n) + 1 << endl;
                }

                else
                {
                    cout << (k / n) << endl;
                }
            }

            else
            {
                ll i = 2;
                while(k < n)
                {
                    k = k * i;
                    i ++ ;
                }

                if(k % n)
                {
                    cout << (k / n) + 1 << endl;
                }

                else
                {
                    cout << k / n << endl;
                }


            }
        }
    }

return 0;
}
