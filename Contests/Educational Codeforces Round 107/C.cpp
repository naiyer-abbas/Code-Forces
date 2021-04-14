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
    int n, q;
    cin >> n >> q;

    vector <int> v;

    int arr[51] = { };
    int temp;

    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        v.pb(temp);
        if(arr[temp] == 0)
        {
            arr[temp] = i;
        }
    }

    vector <int> query(q);

    for(auto &e : query)
    {
        cin >> e;
    }

    for(auto &e : query)
    {
        cout << arr[e] << " ";
        //arr[e] = 1;
        for(int i = 0; i < 51; i++)
        {
            if(arr[i] < arr[e])
            {
                arr[i] ++;
            }
        }

        arr[e] = 1;
    }

}
