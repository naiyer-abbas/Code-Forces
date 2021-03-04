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
    vector <string> v(n);
    set <string> s;

    for(auto &e : v)
    {
        cin >> e;
    }

    sort(v.begin(), v.end());

    vector <int> ans;

    string temp = v.at(0);
    int c = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) == temp)
        {
            c++;
        }

        else if(i < v.size() - 1)
        {
            ans.pb(c);
            temp = v.at(i);
            c = 1;
        }

        if(i == v.size() - 1)
        {
            ans.pb(c);
            temp = v.at(i);
            c = 1;
        }
    }

    auto ip = unique(v.begin(),v.end());
    v.resize(distance(v.begin(), ip));

    int x = max_element(ans.begin(), ans.end()) - ans.begin();
    cout << v.at(x);

}
