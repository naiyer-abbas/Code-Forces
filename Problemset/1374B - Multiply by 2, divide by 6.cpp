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
        ll n;
        cin >> n;
        ll count = 0;
        ll t_count = 0;

        while(n != 1)
        {
            count ++;
            if(n % 6 == 0)
            {
                t_count = 0;
                n = n / 6;
            }

            else
            {
                t_count ++;
                n = n * 2;
            }

            if(t_count == 4)
            {
                cout << - 1 << endl;
                break;
            }
        }
        if(t_count < 4)
        cout << count << endl;
    }
}
