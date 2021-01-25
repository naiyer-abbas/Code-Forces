#include <bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0);    cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

int is_int(double);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t)
    {
        ll a, b;
        cin >> a >> b;

        if(b == a)
        {
            cout << 0 << endl;
        }

        else if(a < b)
        {
            ll rem = b - a;
            ll count = 0;

                for(int k = 10; k >= 0; k--)
                {
                    while(rem)
                    {
                        count  = count + (rem / k);
                        rem = rem % k;
                        if(rem < k)
                            break;
                    }

                }

                cout << count << endl;;
        }

        else
        {
            ll rem = a - b;
            ll count = 0;

                for( int k = 10; k >= 0; k--)
                {
                    while(rem)
                    {
                        count  = count + (rem / k);
                        rem = rem % k;
                        if(rem < k)
                            break;
                    }

                }

                cout << count << endl;
        }






        t -- ;
    }
}

int is_int(double n)
{
    if(double(n) - int(n) == 0)
        return 1;

    else
        return 0;
}
