#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    int p = 0;

    while(n)
    {

        if(n % 2)
        {
            for(int i = 0; i < m; i++)
            {
                cout << "#";
            }

        }

        else
        {
            if(p == 0)
            {
                p++;

                for(int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }

                cout << "#";
            }

            else
            {
                p = 0;
                cout << "#";
                for(int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }

            }
        }


        cout << endl;
       n--;
    }

return 0;
}
