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
    int n;
    cin >> n;

    vector <int> v(n);

    unordered_map <int, pair <int, int> > um;

    for(auto &e : v)
    {
        cin >> e;
    }

    int sum;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            sum = v[i] + v[j];

            if(um.find(sum) == um.end())
            {
                um[sum] = {i, j};
            }

            else
            {
                int c = um[sum].first + 1;
                int d = um[sum].second + 1;

                if(c != i + 1 && d != j + 1 && c != j + 1 && d != i + 1)
                {
                    cout << "YES" << endl;
                    cout << i + 1 << " " << j + 1 << " " << c << " " << d;
                    return 0;
                }

            }

        }
    }

    cout << "NO" << endl;
}
