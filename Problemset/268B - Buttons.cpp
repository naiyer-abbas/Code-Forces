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

    int temp = n;
    int sum = n + (n - 1);
    int x = 2;
    while(n - x > 0)
    {
        sum += (x *(n - x));
        x ++;
    }
    cout << sum;

}
