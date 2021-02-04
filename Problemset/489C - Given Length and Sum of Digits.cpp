#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

vector <int> MAX(int, int);
vector <int> MIN(int, int);

int main()
{
    fast;
    int m, s;
    cin >> m >> s;
    vector <int> v1;
    vector <int> v2;
    v1 = MAX(m, s);
    v2 = MIN(m, s);
    int temp1 = accumulate(v1.begin(), v1.end(), 0);
    int temp2 = accumulate(v2.begin(), v2.end(), 0);
    //cout << temp1 << "  " << temp2;
    if(s == 0 && m == 1)
    {
        cout << 0 << " " << 0;
        return 0;
    }
    if(temp1 != s || v1.at(0) == 0)
    {
        cout << -1 << " " << -1;
    }

    else
    {
        for(auto& e: v2)
        {
            cout << e;
        }

        cout << " ";

        for(auto & e : v1)
        {
            cout << e;
        }
    }
}

vector <int> MAX(int m, int s)
{
    vector <int> v;
    int d = s;
   for(int i = 0; i < m; i++)
   {
       for(int j = 9; j >= 0; j--)
       {
           if(j <= d)
           {
               v.pb(j);
               d -= j;
               break;
           }
       }
   }
   return v;
}

vector <int> MIN(int m, int s)
{
    vector <int> v;
    v.pb(1);
    int d = s;

    for(int i = 1; i < m; i++)
    {
        v.pb(0);
    }

    for(int i = v.size() - 1; i >= 0; i--)
    {
        for(int j = 9; j >= 0; j--)
        {
            if(j + accumulate(v.begin(), v.end(), 0) <= s)
            {
                //d -= j;
                if(i || j)
                {
                    v.at(i) = j;
                    break;
                }

            }
        }
    }

    if(accumulate(v.begin(), v.end(), 0) == s)
    {
        return v;
    }

    else
    {
        for(int i = 2; i < 10; i++)
        {
            if(i + accumulate(v.begin() + 1, v.end(), 0) <= s)
                v.at(0) = i;
        }
        return v;
    }
}
