#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    int count = 0;
    int x = 0;

    while(n)
    {
        n --;
        count ++;
        if(count == m)
        {
            count = 0;
            n ++;
        }
        x ++;
    }
    cout << x;
}
