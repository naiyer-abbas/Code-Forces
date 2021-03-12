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
        int n, m , x ,y;
        cin >> n >> m >> x >> y ;

        char arr[n][m];

        int white = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] == '.')
                {
                    white ++;
                }
            }
        }

        // when we only have to use 1x1

        if(2 * x <= y)
        {
            cout << white * x << endl;
            continue;
        }

        else
        {
            int ans = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if(arr[i][j] == '.')
                    {
                        if(j < m - 1 && arr[i][j + 1] == '.')
                        {
                            ans += y;
                            arr[i][j] = '*';
                            arr[i][j + 1] = '*';
                        }

                        else
                        {
                            ans += x;
                            arr[i][j] = '*';
                        }
                    }
                }
            }

            cout << ans << endl;
        }
    }
}
