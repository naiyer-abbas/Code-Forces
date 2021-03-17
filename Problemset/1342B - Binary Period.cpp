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
        string s;
        cin >> s;

        unordered_set <char> se;

        for(int i = 0; i < s.size(); i++)
        {
            se.insert(s.at(i));
        }

        int sz = se.size();

        if(sz == 1)
        {
            cout << s + s << endl;
            continue;
        }

        else
        {
            string s1 = "01";
            string s2 = "10";
            if(s.at(0) == '1')
            {
                string temp = "";
                for(int i = 0; i < s.size(); i++)
                {
                    temp += s2;

                }
                cout << temp << endl;
            }

            else
            {
                string temp = "";
                for(int i = 0; i < s.size(); i++)
                {
                    temp += s1;
                }

                cout << temp << endl;
            }
        }
    }
}
