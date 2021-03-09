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
    int temp;

    vector <int> v(n + 1, -1);

    for(int i = 1; i < n + 1; i++)
    {
        cin >> temp;
        v[i] = temp;
    }

    int ans = 1;

    for(int i = 1; i < n + 1; i++)
    {
        int x = v.at(i);
        int c = 1;
        while(x != -1)
        {
            c ++;
            x = v.at(x);
        }

        if(c > ans)
        {
            ans = c;
        }
    }
    cout << ans;
}
