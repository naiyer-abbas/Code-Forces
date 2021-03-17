#pragma GCC optimize("O2")
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

    while( t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        int j = n - 1;
        int mn = v.at(n - 1);
        int cnt = 0;
        int mx = v.at(j);


       for(int i = n - 3; i >= 0; i--)
       {
            int mid = i + 1;

            if(v.at(mid) < v.at(i) && v.at(mid) < mx)
            {
                cnt = mid;
                break;
            }
            mx = max(mx, v.at(mid));

            j --;
       }

       cout << cnt << endl;
    }
}
