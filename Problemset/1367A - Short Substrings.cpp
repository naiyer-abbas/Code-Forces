
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        string a ,b;
        cin >> b;
        char f = b.at(0);
        char l = b.at(b.size() - 1);

        vector <char> mid;

        for(int i = 1; i < b.size() - 1; i++)
        {
            mid.pb(b.at(i));
        }

        cout <<f;

        for(int i = 0; i < mid.size(); i = i + 2)
        {
            cout << mid.at(i);
        }
        cout << l;
        cout << endl;

      t -- ;
    }


}
