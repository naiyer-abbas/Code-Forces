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

        int br = 0;

        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = s.at(j);
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] == '1')
                {
                   if(j < n - 1 && i < n - 1)
                   {
                       if(arr[i + 1][j] == '0' && arr[i][j + 1] == '0')
                       {
                           cout << "NO" << endl;
                           br = 1;
                           break;
                       }
                   }

                }
            }
            if(br)
            {
                break;
            }
        }

        if(!br)
        {
            cout << "YES" << endl;
        }


    }
}
