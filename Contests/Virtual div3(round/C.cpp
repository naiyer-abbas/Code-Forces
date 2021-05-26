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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if(n == 2)
        {
            cout << - 1 << endl;
            continue;
        }

        int arr[n][n];

        int num1 = 1;
        int mark1 = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = num1;
                num1 += 2;

                if(num1 > n * n && mark1 == 0)
                {
                    num1 = 2;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

}
