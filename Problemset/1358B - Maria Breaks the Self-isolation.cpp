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
        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        sort(v.begin(), v.end());

        int curr = v.size();

        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(v.at(i) > curr)
            {
                curr --;
            }
        }

        cout << curr + 1 << endl;
    }
}
