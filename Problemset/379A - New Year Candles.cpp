#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int a, b;
    cin >> a >> b;
    int flag = 0;
    int n = 0;

    for(int i = a; i > 0; i--)
    {
        n ++;
        flag ++;
        if((n - b) >= 0 && flag == b)
        {
            i ++;
            flag = 0;
        }
    }

    cout << n;
}
