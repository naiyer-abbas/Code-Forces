#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0); cin.tie(0);  cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    string temp;
    vector <pair <string, int > > rec;
    rec.pb(mp("0",0));

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        int flag = 0;
        for( auto& e: rec)
        {

            if(temp == e.first)
            {
                e.second ++;
                cout << e.first << e.second << endl;
                flag = 1;
                break;
            }

        }
        if(flag == 0)
        {
            rec.pb(mp(temp , 0));
            cout << "OK" << endl;
        }

    }

  /*  for(const auto& e: rec)
    {
        if(e.second == 0)
        {
            cout << "OK" <<endl;
        }

        else
        {
            cout << e.first << e.second <<endl;
        }
    } */

}
