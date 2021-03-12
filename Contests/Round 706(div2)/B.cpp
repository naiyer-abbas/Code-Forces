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
        ll n, k;
        cin >> n >> k;
        //vector <ll> dp(100000001, 0);
        vector <ll> v(n);

        set <ll> s;

        for(auto &e : v)
        {
            cin >> e;
            //dp.at(e) ++;
            s.insert(e);
        }

        int sz;

        sz = s.size();

        if(k == 0)
        {
            cout << sz << endl;
            continue;
        }

        sort(v.begin(), v.end());

        ll mex, mx;
        mx = *max_element(v.begin(), v.end());
        int br = 0;

        for(ll i = 0; i <= 1000000000; i++)
        {
            if(binary_search(v.begin(), v.end(), i) == 0)
            {
                mex = i;
                break;
            }
        }

        if(mex > mx)
        {
            cout << sz + k << endl;
            continue;
        }

        else
        {
            ll val;
           if((mx + mex) % 2)
           {
               val = (mx + mex) / 2 + 1;
           }

           else
           {
               val = (mx + mex) / 2;
           }

           if(binary_search(v.begin(), v.end(), val) == 0)
           {
                sz ++;
           }

           cout << sz << endl;
        }

    }
}
