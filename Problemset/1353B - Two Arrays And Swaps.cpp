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
        int n, k;
        cin >> n >> k;
        int temp;

        vector<int> v1;
        vector <int> v2;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v1.pb(temp);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v2.pb(temp);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int l = n - 1;

        for(int i = 0; i < k; i++)
        {
            if(v1.at(i) < v2.at(l))
            {
                v1.at(i) = v2.at(l);
            }
            l -- ;
        }

        cout << accumulate(v1.begin(), v1.end(), 0) << endl;
    }
}
