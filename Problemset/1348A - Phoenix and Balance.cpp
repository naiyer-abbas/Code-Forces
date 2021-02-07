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
        cin >> n;
        vector <ll> v;
        for(int i = 1; i <= n; i++)
        {
            v.pb((int)pow(2,i));
        }

        int length = n / 2;

        ll sum1 = 0;
        int x = 0;
        int j = 2;

        for(int i = 0; i < length; i++)
        {
            sum1 += v.at(v.size() - j);
            j ++;
        }

        ll sum2 = v.at(v.size() - 1);

        for(int i = 0; i < length - 1; i++)
        {
            sum2 += v.at(i);
        }

        cout << sum2 - sum1 << endl;
    }
}
