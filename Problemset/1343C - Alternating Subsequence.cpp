#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int signof(ll);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        ll temp;
        vector <ll> v;
        ll sum = 0;
        int flag = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        ll m = v.at(0);

        for(int i = 1; i < n; i++)
        {
            if(signof(v.at(i)) != signof(v.at(i - 1)))
            {
                sum += m;
                m = v.at(i);
                flag = 1;
            }

            else
            {
                if(v.at(i) > m)
                {
                    m = v.at(i);
                    flag = 1;
                }
            }
        }

        sum += m;




        cout << sum << endl;

    }
}

int signof(ll n)
{
    if(n > 0)
        return 0;
    return -1;
}
