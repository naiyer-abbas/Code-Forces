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
        ll A, B, n;
        cin >> A >> B >> n;

        vector <ll> mp;
        vector <ll> mh;

        ll temp;

        for(ll i = 0; i < n; i++)
        {
            cin >> temp;
            mp.pb(temp);
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> temp;
            mh.pb(temp);
        }

        ll max = -232;
        ll max_index;

        for(ll i = 0; i < mp.size(); i++)
        {
            if(mp.at(i) > max)
            {
                max = mp.at(i);
                max_index = i;
            }
        }

        swap(mp.at(max_index), mp.at(n - 1));
        swap(mh.at(max_index), mh.at(n - 1));

        int flag = 1;

        for(ll i = 0; i < n; i++)
        {
            if(i != n - 1)
            {
              B -= ceil(double(mh.at(i)) / double(A)) * mp.at(i);
                if(B < 1)
                {
                    cout <<"NO" <<endl;
                    flag = 0;
                    break;
                }

            }

            else if(i == n - 1)
            {
                    B -= mp.at(i) * (ceil(double(mh.at(i)) / double(A)) - 1);
                    if(B < 1)
                    {
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    }
            }
        }
        if(flag)
            {
                cout << "YES" <<endl;
            }
    }
}

