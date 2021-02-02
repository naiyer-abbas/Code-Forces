#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int a, b;
        cin >> a >> b;

        if(min(a , b) + min(a , b) >= max(a , b))
        {
            cout << (int)pow(min(a , b) + min(a, b), 2) << endl;
        }

        else
        {
            cout << max(a , b) * max(a , b) << endl;
        }
    }
}
