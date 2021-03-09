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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        int check = 0;

        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        string s = "2";

        for(int i = 0; i < n - 1; i++)
        {
            s.pb('3');
        }

        cout << s << endl;
    }
}
