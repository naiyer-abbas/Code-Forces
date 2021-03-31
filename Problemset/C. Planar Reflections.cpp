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

ll dp_left[1003][1003]; // memoization table for particles moving towards left
ll dp_right[1003][1003];  // memoization table for particles moving towards right



ll get_ref(int n, int k, int N, int towards)
{
    if(k == 1)
    {
        return 0;
    }

    if(n < 0 && towards == 0)
    {
        return 0;
    }

    if(n >= N && towards == 1)
    {
        return 0;
    }

    if(towards == 0)    // if particle is moving towards left
    {
        if(dp_left[n][k] != -1)
        {
            return dp_left[n][k];
        }

        return dp_left[n][k] =  1 + (get_ref(n - 1, k, N, 0) % MOD) + (get_ref(n + 1, k - 1, N, 1) % MOD);
    }

    else if(towards == 1)   // if particle is moving towards right
    {
        if(dp_right[n][k] != -1)
        {
            return dp_right[n][k];
        }

        return dp_right[n][k] =  1 + (get_ref(n - 1, k - 1, N, 0) % MOD) + (get_ref(n + 1, k, N, 1) % MOD);
    }


}


int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        memset(dp_left, - 1, sizeof(dp_left));
        memset(dp_right, - 1, sizeof(dp_right));
        int n, k;
        cin >> n >> k;
        cout << get_ref(0, k, n, 1) + 1 << endl;  // + 1 for the first particle
    }
}
