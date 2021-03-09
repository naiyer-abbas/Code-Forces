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
    int k;
    cin >> k;
    int m = 12;
    vector <int> v(m);

    for(auto &e : v)
    {
        cin >> e;
    }

    if(k == 0)
    {
        cout << 0;
        return 0;
    }

    if(accumulate(v.begin(), v.end(), 0LL) < k)
    {
        cout << -1;
        return 0;
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int c = 0;

    for(int i = v.size() - 1; i >= 0; i--)
    {
        sum += v.at(i);
        c++;
        if(sum >= k)
        {
            break;
        }
    }
    cout << c;
}
