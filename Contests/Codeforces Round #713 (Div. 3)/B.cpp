#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
    fast
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        char arr[n][n];

        pair <int, int> star1, star2;
        int check = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];

                if(arr[i][j] == '*' && !check)
                {
                    star1 = mp(i + 1, j + 1);
                    check = 1;
                    continue;
                }

                if(arr[i][j] == '*' && check)
                {
                    star2 = mp(i + 1, j + 1);
                }
            }
        }


        if(star1.first == star2.first)  // if they are in same row
        {
             if(star1.first != 1 && star2.first != 1)
            {
                arr[star1.first - 2][star1.second - 1] = '*';
                arr[star2.first - 2][star2.second - 1] = '*';
            }

            else
            {
                arr[star1.first][star1.second - 1] = '*';
                arr[star2.first][star2.second - 1] = '*';
            }
        }

        else if(star1.second == star2.second)       // same column
        {
            if(star1.second != 1 && star2.second != 1)
            {
                arr[star1.first - 1][star1.second - 2] = '*';
                arr[star2.first - 1][star2.second - 2] = '*';
            }

            else
            {
                arr[star1.first - 1][star1.second] = '*';
                arr[star2.first - 1][star1.second] = '*';
            }
        }

        else
        {
            int diff_i = abs(star2.first - star1.first);
            int diff_j = abs(star2.second - star1.second);

            if(star1.second > n / 2)
            {
                arr[star2.first  - 1][star1.second - 1] = '*';
                arr[star1.first - 1][star2.second - 1] = '*';
            }

            else
            {
                 arr[star2.first  - 1][star1.second - 1] = '*';
                arr[star1.first - 1][star2.second - 1] = '*';
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }


    }
}
