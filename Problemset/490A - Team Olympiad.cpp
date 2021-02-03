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
    int temp;
    vector<int> v1;
    vector <int> v2;
    vector <int> v3;

    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        if(temp == 1)
        {
            v1.pb(i);
        }

        else if(temp == 2)
        {
            v2.pb(i);
        }

        else
        {
            v3.pb(i);
        }
    }

    int Min = min(min(v1.size(), v2.size()), v3.size());

    cout << Min << endl;
    for(int i = 0; i < Min; i++)
    {
        cout << v1.at(i) << " " << v2.at(i) << " " << v3.at(i) << endl;
    }

}
