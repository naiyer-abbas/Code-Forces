#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    vector <int> v;
    vector <int> vc;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    vc = v;
    vector <int> ans;
    int sum = 0;

    int total = 0;

    for(int i = 0; i < n; i++)
    {
        vc = v;
            for(int j = i; j < n; j++)
            {
               vc.at(j) = 1 - vc.at(j);
               sum = accumulate(vc.begin(), vc.end(), 0);
               total = max(total,sum);
            }
    }

    cout << total;

}
