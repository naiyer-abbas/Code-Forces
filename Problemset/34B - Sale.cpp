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
    int n, m;
    cin >> n >> m;
    vector <int> v(n);

    int check = 0;

    for(auto &e : v)
    {
        cin >> e;
        if(e < 0)
        {
            check ++;
        }
    }

    if(!check)
    {
        cout << 0;
        return 0;
    }

    else
    {
        sort(v.begin(), v.end());
        int mn = min(check, m);
        int sum = 0;

        for(int i = 0; i < mn; i++)
        {
            sum += v.at(i);
        }

        cout << (sum) * -1;
    }

}
