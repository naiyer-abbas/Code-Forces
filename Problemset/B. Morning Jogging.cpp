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
        int n, m;
        cin >> n >> m;

        vector <pair<ll, int >> v;

        ll temp;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> temp;
                v.pb(mp(temp, i));
            }
        }

        sort(v.begin(), v.end());

        ll matrix[n + 1][m + 1];

        memset(matrix, -1, sizeof(matrix));

        int x = 0;

        for(int i = 0 ; i < m; i++)
        {
            matrix[v.at(i).second][x] = v.at(i).first;
            v.at(i).first = -1;
            x ++;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] == -1)
                {
                    for(auto &e: v)
                    {
                        if(e.first != -1 && e.second == i)
                        {
                            matrix[i][j] = e.first;
                            e.first = -1;
                            break;
                        }
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < m; j++)
            {
                cout << matrix[i][j] <<  "  ";
            }
            cout << endl;
        }
    }
}
