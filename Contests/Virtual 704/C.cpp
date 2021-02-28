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

    string s , t;
    cin >> s >> t;


    vector <int> v1;
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(s.at(i) == t.at(j))
        {
            v1.pb(i + 1);
            j++;
        }

        if(j == m - 1)
        {
            break;
        }
    }


    vector <int> v2;
    int k = m - 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(s.at(i) == t.at(k))
        {
            v2.pb(i + 1);
            k --;
        }

        if(k == 0)
        {
            break;
        }
    }

    reverse(v2.begin(), v2.end());

    int ans = 1;

    for(int i = 0; i < v1.size(); i++)
    {
        if(abs(v1.at(i) - v2.at(i)) > ans)
        {
            ans = abs(v1.at(i) - v2.at(i));
        }
    }

    cout << ans;

}
