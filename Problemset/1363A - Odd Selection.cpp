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
        int n, x;
        cin >> n >> x;
        vector <int> v(n);
        int check = 0;

        int c_odd = 0, c_even = 0;

        for(auto &e : v)
        {
            cin >> e;
            if(e % 2)
            {
                c_odd ++;
            }

            else
            {
                c_even++;
            }
        }

        if(c_odd == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int odd = 1;
        if(c_odd % 2 == 0)
            c_odd --;
            while(odd <= c_odd && x >= odd)
            {
                if((x - odd) <= c_even)
                {
                    cout << "YES" <<endl;
                    check = 1;
                    break;
                }
                odd += 2;
            }

            if(!check)
                {
                    cout << "NO" << endl;
                    continue;
                }
    }
}
