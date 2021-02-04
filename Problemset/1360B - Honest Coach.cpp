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
        int n, temp;
        cin >> n;
        vector <int> v;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        sort(v.begin(), v.end());

        int min = 100000;

        for(int i = n - 1; i >= 0; i--)
        {
            if(i && v.at(i) - v.at(i - 1) < min)
            {
                min = v.at(i) - v.at(i - 1);
            }
        }

        cout << min << endl;
    }
}
