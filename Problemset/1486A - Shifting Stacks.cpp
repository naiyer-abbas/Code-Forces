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
        int n;
        vector <ll> v;
        ll temp;
        int flag = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        ll min;

        for(int i = 0; i < n; i++)
        {
            if(i != 0)
            {
                v.at(i) = (v.at(i) + v.at(i - 1)) - (i - 1);
                v.at(i - 1) = i - 1;

                if(v.at(i) < i)
                {
                    cout << "NO" <<endl;
                    flag = 1;
                    break;
                }
            }
        }


        if(flag == 0)
        {
            cout << "YES" << endl;
        }
    }

}
