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
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(i % 2 == 0)
            {
                if(s.at(i) != 97)
                {
                    s.at(i) = 97;
                }

                else
                {
                    s.at(i) = 98;
                }
            }

            else
            {
                if(s.at(i) == 122)
                {
                    s.at(i) = 121;
                }

                else
                {
                    s.at(i) = 122;
                }
            }

        }

        cout << s << endl;

    }
}
