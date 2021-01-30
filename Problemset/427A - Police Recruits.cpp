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

    vector <int> v;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    int crime = 0;
    int free = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) == -1 && free == 0)
        {
            crime ++;
        }

        else if(v.at(i) == -1 && free)
        {
            free --;
        }

        else if(v.at(i) != -1)
        {
            free += v.at(i);
        }
    }

    cout << crime;
}
