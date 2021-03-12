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
        vector <string> a(9);

        for(auto &e : a)
        {
            cin >> e;
        }

        for(int i = 0; i < 9; i++)
        {
            if((3 * i) % 8 || i == 0)
            {
                if(a[i][(3 * i) % 8] != '2')
                {
                    a[i][(3 * i) % 8] = '2';
                }

                else
                {
                    a[i][(3 * i) % 8] = '3';
                }
            }

            else
            {
                if(a[i][8] != '2')
                {
                    a[i][8] = '2';
                }

                else
                {
                    a[i][8] = '3';
                }
            }
        }
        for(auto &e : a)
        {
            cout << e << endl;
        }
        cout << endl;
    }
}
