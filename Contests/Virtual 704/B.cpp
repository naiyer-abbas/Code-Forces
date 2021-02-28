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
        int n;
        cin >> n;
        int temp;
        vector <int> v;
        int arr[n + 1];

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
            arr[temp] = v.size() - 1;
        }

        int j = n;

        int x = v.size();
        int p = v.size();
        while(p)
        {
            //int m = *max_element(v.begin(), v.begin() + x);
            if(arr[j] < x)
            {
                x = arr[j];
                reverse(v.begin() + x, v.begin() + p);
                p = x;
            }
            j --;
        }

        reverse(v.begin(), v.end());

        for(auto &e : v)
        {
            cout << e << " ";
        }

        cout << endl;

    }
}
