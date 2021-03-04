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
    vector <pair <string, string> > v(m);

    for(auto &e : v)
    {
        cin >> e.first;
        cin >> e.second;
    }


    sort(v.begin(), v.end());

    vector <string> p(n);

    vector <string> temp;

    for(auto &e : v)
    {
        temp.pb(e.first);
    }

    for(auto &e : p)
    {
        cin >> e;
        int x = lower_bound(temp.begin(), temp.end(), e) - temp.begin();
        if(v.at(x).first.size() > v.at(x).second.size())
        {
            cout << v.at(x).second;
            cout <<" ";
        }

        else
        {
            cout << v.at(x).first;
            cout << " ";
        }
    }

}
