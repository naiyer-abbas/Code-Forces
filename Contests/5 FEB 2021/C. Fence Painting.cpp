#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(false);    cin.tie(NULL);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t --)
    {
        int n, m;
        cin >> n >> m;

        int bef[n];
        int aft[n];

        for(int i = 0; i < n; i++)
        {
            cin >> bef[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> aft[i];
        }

        int painter[m];

        for(int i = 0; i < m; i++)
        {
            cin >> painter[i];
        }

        int check = 0;
        int ans[m];
        int useless;

        for(int i = n - 1; i >= 0; i--)
        {
            if(aft[i] == painter[m - 1] && aft[i] != bef[i])
            {
                check = 1;
                useless = i;
                break;
            }
        }

        if(!check)
        {
            for(int i = n - 1; i >= 0; i--)
            {
                if(aft[i] == painter[m - 1])
                {
                    check = 1;
                    useless = i;
                    break;
                }
            }
        }

        if(!check)
        {
            cout << "NO" << endl;
            continue;
        }

        for(int i = 0; i < n; i ++)
        {
            if(bef[i] != aft[i])
            {
                for(int j = 0; j < m; j++)
                {
                    if(painter[j] == aft[i])
                    {
                        ans[j] = i;
                        bef[i] = aft[i];
                        painter[j] = -1;
                        break;
                    }

                }
            }
        }

        for(int i = 0; i < m; i++)
        {
            if(painter[i] != -1)
            {
                ans[i] = useless;
            }
        }


        for(int i = 0; i < n; i++)
        {
            if(bef[i] != aft[i])
            {
                check = 0;
                break;
            }
        }

        if(!check)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(int i = 0; i < m; i++)
        {
            cout << ans[i] + 1<< " ";
        }
        cout << endl;
    }
}
