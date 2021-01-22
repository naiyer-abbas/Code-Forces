#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main()
{
    fast;
    int n;
    cin >> n;

    if(n == 12)
        cout << 6 << " "<< 6;

   else if(n % 2 == 0)
    {
        cout << 10 << " " << n - 10;
    }

    else
    {
        if(n > 20)
        {
             cout << 15 << " " << n - 15;
        }

        else
        {
            cout << 9 << " " << n - 9;
        }

    }
}
