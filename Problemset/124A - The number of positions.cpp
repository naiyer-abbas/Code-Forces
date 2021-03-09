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
    int n, a ,b;
    cin >> n >> a >> b;

    int ans = 0;

    for(int i = n; i > 0; i--)
    {
        if(i - 1 >= a && n - i <= b)
        {
            ans ++;
        }
    }
    cout << ans;
}
