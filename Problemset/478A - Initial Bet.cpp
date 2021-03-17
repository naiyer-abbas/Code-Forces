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
    int c1, c2, c3 ,c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int sum = c1 + c2 + c3 + c4 + c5;

    if(sum % 5 == 0 && sum / 5 != 0)
    {
        cout << sum / 5;
    }

    else
    {
        cout << -1;
    }
}
