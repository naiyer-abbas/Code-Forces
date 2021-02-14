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
    while( t--)
    {
        float a;
        cin >> a;
        float ans = 360 / (180 - a);
        if(ceil(ans) == floor(ans))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
