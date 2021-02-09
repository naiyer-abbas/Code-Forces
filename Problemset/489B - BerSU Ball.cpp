#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n, m;
    cin >> n;
    int b[101] = {};
    int g[101] = {};
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        b[temp] ++;
    }

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        g[temp] ++;
    }

    int count = 0;

    for(int i = 1; i < 101; i++)
    {
        if(i != 1 && i != 100)
        {
            for(int j = i - 1; j <= i + 1; j ++)
           {
                       count += min(g[j], b[i]);
                       if(g[j] > b[i])
                       {
                           g[j] = g[j] - b[i];
                           b[i] = 0;
                       }

                       else if(g[j] < b[i])
                       {
                           b[i] = b[i] - g[j];
                           g[j] = 0;
                       }

                       else
                       {
                           b[i] = g[j] = 0;
                       }
           }
        }

        else if(i == 100)
        {
            for(int j = i - 1; j <= i; j ++)
           {

                       count += min(g[j], b[i]);
                        if(g[j] > b[i])
                       {
                           g[j] = g[j] - b[i];
                           b[i] = 0;
                       }

                       else if(g[j] < b[i])
                       {
                           b[i] = b[i] - g[j];
                           g[j] = 0;
                       }

                       else
                       {
                           b[i] = g[j] = 0;
                       }
           }
        }

        else if(i == 1)
        {
            for(int j = i; j <= i + 1; j ++)
           {
                       count += min(g[j], b[i]);
                        if(g[j] > b[i])
                       {
                           g[j] = g[j] - b[i];
                           b[i] = 0;
                       }

                       else if(g[j] <= b[i])
                       {
                           b[i] = b[i] - g[j];
                           g[j] = 0;
                       }
           }
        }

    }
    cout << count;

}
