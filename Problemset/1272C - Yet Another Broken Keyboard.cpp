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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int arr[27] = {};
    char temp;
    while(k --)
    {
        cin >> temp;
        arr[temp - 96] = 1;
    }

    ll total = 0;
    ll cnt = 0;
    int x = 0;

    for(auto &e : s)
    {
        x ++;
        if(arr[e - 96] == 1)
        {
            cnt ++;
            if(x == s.size())
            {
                cnt = (cnt * (cnt + 1)) / 2;
                total += cnt;
            }
        }

        else
        {
            cnt = (cnt * (cnt + 1)) / 2;
            total += cnt;
            cnt = 0;
        }
    }

    cout << total;
}
