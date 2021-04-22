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
        vector <vector <int> >v(n + 1);
        int k, temp;

        int vis_p [n + 1] = {};
        int vis_d [n + 1] = {};
        vis_p[0] = 1;
        vis_d[0] = 1;

        //map <int, int> daughters;

        for(int i = 1; i <= n; i++)
        {
            cin >> k;
            while(k --)
            {
                cin >> temp;
                v.at(i).pb(temp);
            }
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < v.at(i).size(); j++)
            {
                if(!vis_p[v.at(i).at(j)])
                {
                    vis_p[v[i][j]] = 1;
                    vis_d[i] = 1;
                    break;
                }
            }
        }

        bool ok = true;
        int d;

        for(int i = 1; i <= n; i++)
        {
            if(!vis_d[i])
            {
                ok = false;
                d = i;
                break;
            }
        }

        if(!ok)
        {
            cout << "IMPROVE" << endl;
            cout << d  << " ";
            int p;
            for(int i = 1; i <= n; i++)
            {
                if(!vis_p[i])
                {
                    p = i;
                    break;
                }
            }

            cout << p << endl;
        }

        else
        {
            cout << "OPTIMAL" << endl;
        }


    }
}
