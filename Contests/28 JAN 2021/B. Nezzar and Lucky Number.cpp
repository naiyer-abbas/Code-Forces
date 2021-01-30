#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);



int main()
{
    fast;
    int t;
    cin >> t;

    while(t -- )
    {
        ll q, d;
        cin >> q >> d;
        ll temp;
        for(ll i = 0; i < q; i++)
        {
            cin >> temp;
            ll sum = d;
            ll j = temp;

            for( j = temp; j >= d; j-=10)
            {
                if(j % d == 0)
                {
                    cout << "YES" << endl;
                    break;
                }

            }

            if(j < d)
            {
                cout << "NO" <<endl;
            }


        }
    }
}

