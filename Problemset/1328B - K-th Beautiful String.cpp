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
        ll d = 8 * k + 1;
        double temp = sqrt(double(d));
        ll sol = ceil((temp - 1) / 2);

        // first b is at (n - sol) - 1

        ll pos1 = (n - sol) - 1;

        ll c = ((sol - 1) * (sol)) / 2;
        ll e = (sol * (sol + 1)) / 2;

        ll pos2 = n - (k - c);

        string s = "";

        for(int i = 0; i < n; i++)
        {
            s.pb('a');
        }

        s.at(pos1) = 'b';
        s.at(pos2) = 'b';

        cout << s << endl;
    }
}
