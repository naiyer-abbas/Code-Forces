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
    ull n;
    cin >> n;
    n --;
    vector <string> s = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    ll count = 5;
    int i = 1;
    ull x = 5;

    while(1)
    {
        x = x * 2;
        count += x;
        i = i * 2;
        if(count > n)
        {
            count -= x;
            break;
        }

    }

    if(n < count)
    {
        cout << s.at(n % 5);
    }

    else
    {
        cout << s.at(((n - count) / i) % 5);
    }

    return 0;
}
