#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair

int main()
{
    fast;
    int s, n;
    cin >> s >> n;

    vector <pair<int, int > > strength;
    int temp1, temp2;

    for(int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        strength.pb(mp(temp1, temp2));
    }
    sort(strength.begin(), strength.end());

    for(const auto& e : strength)
    {
        if(s <= e.first)
        {
            cout<<"NO";
            break;
        }

        else
        {
            s += e.second;
        }
    }

    if(s > strength.at(n-1).first)
    {
        cout << "YES";
    }
}
