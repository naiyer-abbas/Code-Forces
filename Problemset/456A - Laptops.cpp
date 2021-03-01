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
    int temp1, temp2;
    vector <pair <int, int> > p;

    for(int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        p.pb(mp(temp1, temp2));
    }

    sort(p.begin(), p.end());
    int flag = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(p.at(i + 1).second < p.at(i).second && p.at(i + 1).first > p.at(i).first)
        {
            cout << "Happy Alex";
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "Poor Alex";
    }
    return 0;
}
