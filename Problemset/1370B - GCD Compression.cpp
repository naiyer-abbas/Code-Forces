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
        int N;
        cin >> N;
        int n = 2 * N;

        vector <int> v;

        int temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }

        int c = 0;

        for(int i = 0; i < v.size(); i++)
        {
            if(v.at(i) != -1)
            {
                for(int j = i + 1; j < v.size(); j++)
                {
                    if(v.at(i) % 2 && v.at(j) % 2 && v.at(j) != -1)
                    {
                        c ++;
                        cout << i + 1 << " " << j + 1 << endl;
                        v.at(j) = -1;
                        break;

                    }

                    if(c == N - 1)
                    {
                        break;
                    }

                    else if(v.at(i) % 2 == 0 && v.at(j) % 2 == 0 && v.at(j) != -1)
                    {
                        c ++;
                        cout << i + 1 << " " << j + 1 << endl;
                        v.at(j) = -1;
                        break;

                    }

                    if(c == N - 1)
                    {
                        break;
                    }
                }
            }

            if(c == N - 1)
            {
                break;
            }
        }


    }

}
