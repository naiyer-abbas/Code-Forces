#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n, t;
    cin >> n >> t;
    int temp;
    vector <int> v;
    v.pb(0);
    int d = 0;

    for(int i = 1; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    for(int i = 1; i < n; i++)
    {
        d = i + v.at(i);
        if(d == t)
        {
            cout << "YES";
            return 0;
        }
        i = d - 1;
    }

    cout << "NO";
}
