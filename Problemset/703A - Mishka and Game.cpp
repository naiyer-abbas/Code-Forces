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
    int m1 = 0, c1 = 0;
    int m, c;
    for(int i = 0; i < n; i++)
    {
        cin >> m >> c;
        if(m > c)
        {
            m1 ++;
        }

        else if(m < c)
        {
            c1 ++;
        }
    }

    if(m1 > c1)
    {
        cout << "Mishka";
    }

    else if(m1 < c1)
    {
        cout << "Chris";
    }

    else
    {
        cout << "Friendship is magic!^^";
    }
}
