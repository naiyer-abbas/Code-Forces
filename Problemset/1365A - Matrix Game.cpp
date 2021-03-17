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
        int n,m ;
        cin >> n >> m;

        int arr[n][m];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int col_free = 0;
        int row_free = 0;

        for(int i = 0; i < n; i++)
        {
            int ones  = 0;
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == 1)
                {
                    ones ++;
                    break;
                }
            }

            if(ones == 0)
            {
                row_free ++;
            }
        }

        for(int i = 0; i < m; i++)
        {
            int ones  = 0;
            for(int j = 0; j < n; j++)
            {
                if(arr[j][i] == 1)
                {
                    ones ++;
                    break;
                }
            }

            if(ones == 0)
            {
                col_free ++;
            }
        }

        int free = min(row_free, col_free);

        if(free % 2)
        {
            cout << "Ashish" << endl;
        }

        else
        {
            cout << "Vivek" << endl;
        }



    }
}
