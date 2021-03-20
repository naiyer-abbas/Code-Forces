#pragma GCC optimize("O2")
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
        int n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;

        int arr[2][n] = {{}};

        int whites = 0;
        int blacks = 0;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == 0 && j < k1)
                {
                    arr[i][j] = 1;
                    whites ++;
                }

                else if(i == 1 && j < k2)
                {
                    arr[i][j] = 1;
                    whites ++;
                }
            }
        }

        blacks = (2 * n) - whites;

        int ans_b = blacks / 2;
        int ans_w = whites / 2;

        if(ans_b >= b && ans_w >= w)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
