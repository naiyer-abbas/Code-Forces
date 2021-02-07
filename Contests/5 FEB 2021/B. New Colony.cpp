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
        ll n, k;
        cin >> n >> k;
        vector <ll> v;
        v.pb(0);
        ll temp;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        ll b = 0;
        ll lb = 0;

        int i = 1;
            for( i = 1; i <= n; i++)
            {
                if(i < n && v.at(i) < v.at(i + 1))
                {
                    v.at(i) ++;
                    b ++;
                    lb = i;
                    i = 0;
                }

                if(k <= b)
                {
                    cout << lb << endl;
                    break;
                }
            }
        if(i >= n)
        {
            cout << -1 << endl;
        }
    }


    return 0;
}
