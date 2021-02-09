#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t --)
    {
        int n, m;
        cin >> n >> m;

        int ans[m] = {};

        vector <int> original;
        original.pb(0);
        int temp;
        for(int i = 1; i <= n; i++)
        {
            cin >> temp;
            original.pb(temp);
        }

        vector <int> New ;
        New.pb(0);
        for(int i = 1; i <= n; i++)
        {
            cin >> temp;
            New.pb(temp);
        }

        vector <int> painter;
        for(int i = 0; i < m; i++)
        {
            cin >> temp;
            painter.pb(temp);
        }

        int x;

        for( x = 1; x <= n; x++)
        {
            if(painter.at(m - 1) == New.at(x))
            {
                x = -1;
                break;
            }
        }

        if(x != -1)
        {
            cout << "NO" <<endl;
        }

        else
        {
            int record[n + 1] = {};

            for(int i = 1; i <= n; i++)
            {
                if(original.at(i) != New.at(i))
                {
                    record[i] = 1;
                }
            }

            for(int i = 1; i < New.size(); i++)
            {
                if(painter.at(m - 1) == New.at(i))
                {
                    ans[m - 1] = i;
                    break;
                }
            }


            for(int i = 0; i < m; i++)
            {
                for(int j = 1; j <= n; j++)
                {
                    if(painter.at(i) == New.at(j))
                    {
                        if(record[j])
                        {
                            ans[i] = j;
                            painter.at(i) = -1;
                            record[j] = 0;
                            //original[j] = New[j];
                            break;
                        }
                    }
                }
            }

            for(int i = 0; i < m - 1; i++)
             {
                if(painter.at(i) != -1)
                {
                    painter.at(i) = -1;
                    ans[i] = ans[m - 1];
                    //record[ans[m - 1]] = 0;
                }
            }


            int j;

            for( j = 1; j <= n; j++)
            {
                if(record[j])
                {
                    cout << "NO" << flush << endl;
                    j = -1;
                    break;
                }
            }

            if(j != -1)
            {
                cout << "YES" << flush << endl;
                for(int i = 0; i < m; i++)
                {
                    cout << ans[i] << " ";
                }

                cout << endl;
            }

        }
    }
}
