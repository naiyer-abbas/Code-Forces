#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define db double
#define MOD 10000007

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int arr[51] = {};
        vector <int> v;
        int n;
        cin >> n;
        int temp;

        for(int i = 0; i < 2 * n; i ++)
        {
            cin >> temp;
            v.pb(temp);
        }

        vector <int> res;

        for(int i = 0; i < 2 *n; i++)
        {
            arr[v.at(i)] = 1;
        }

        for(int i = 0; i < 2 * n; i++)
        {
            if(arr[v.at(i)] == 1)
            {
                res.pb(v.at(i));
                arr[v.at(i)] = 0;
            }
        }

        for(auto &e : res)
        {
            cout << e << " ";
        }

        cout << endl;
    }
}
