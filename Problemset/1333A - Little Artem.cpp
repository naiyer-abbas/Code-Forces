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
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for(int i = 0; i <n ; i ++)
        {
            for(int j = 0 ;j < m; j++)
            {
                arr[i][j] = 'B';
            }
        }

        arr[n - 1][m - 1] = 'W';

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}
