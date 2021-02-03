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
        int n;
        cin >> n;
        int temp;
        int count_e = 0;
        int count_o = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp % 2 != i % 2 && temp % 2 == 0)
            {
                count_e ++;
            }

            else if(temp % 2 != i % 2 && temp % 2)
            {
                count_o ++;
            }
        }

        if(count_e == count_o)
        {
            cout << count_e << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
}
