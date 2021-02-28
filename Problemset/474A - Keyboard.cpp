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
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string t;
    cin >> t;

        for(int i = 0; i < t.size(); i++)
        {
            for(int j = 0; j < s.size(); j++)
            {
                if(t.at(i) == s.at(j))
                {
                    if(c == 'R')
                    cout << s.at(j - 1);

                    else
                        cout << s.at(j + 1);
                }
            }
        }

}
