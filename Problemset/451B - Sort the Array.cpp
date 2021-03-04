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
    int n;
    cin >> n;

    vector <ll> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    ll mx = v.at(0);
    vector <int> in;
    int br = 0;

    for(int i = 1; i < n; i++)
    {
        if(v.at(i) > mx)
        {
            mx = v.at(i);
        }

        else
        {
                in.pb(i - 1);
                br = 1;
                break;

        }
    }

    if(!br)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return 0;
    }
        br = 0;
        ll mn = v.at(in.at(0));
        for(int i = in.at(0) + 1; i < n; i++)
        {
            if(v.at(i) < mn)
            {
                mn = v.at(i);
            }

            else
            {
                    in.pb(i - 1);
                    br = 1;
                    break;
            }
        }

        if(!br)
        {
            reverse(v.begin() + in.at(0), v.end());
            if(is_sorted(v.begin(), v.end()))
            {
                cout << "yes" << endl;
                cout << in.at(0) + 1 << " " << n;
            }

            else
            {
                cout << "no";
            }
        }

        else
        {
            reverse(v.begin() + in.at(0), v.begin() + in.at(1) + 1);
            if(is_sorted(v.begin(), v.end()))
            {
                cout << "yes" << endl;
                cout << in.at(0) + 1 << " " << in.at(1) + 1;
            }

            else
            {
                cout << "no";
            }
        }
}
