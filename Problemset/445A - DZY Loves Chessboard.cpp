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
    int n, m;
    cin >> n >> m;

    char arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    char start = 'W';
    char curr = 'W';

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == '.')
            {
                arr[i][j] = curr;

            }

            if(curr == 'W')
            {
                curr = 'B';
            }

            else
            {
                curr = 'W';
            }
        }

        if(start == 'B')
        {
            start = 'W';
            curr = 'W';
        }

        else
        {
            start = 'B';
            curr = 'B';
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
