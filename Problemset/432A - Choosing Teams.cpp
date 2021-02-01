#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n, k;
    cin >> n >> k;
    vector <int> v;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(5 - v.at(i) >= k)
        {
            count ++;
        }
    }

    cout << count / 3 << flush;
}
