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
    ll n;
    cin >> n;
    n --;
    int arr[4] = {8, 4, 2, 6};

    if(n == -1)
    {
        cout << 1;
        return 0;
    }

    cout << arr[n % 4];
}
