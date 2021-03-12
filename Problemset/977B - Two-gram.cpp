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
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <string> ans;
    string curr;

    for(int i = 0; i < s.size() - 1; i++)
    {
        ans.pb(s.substr(i, 2));
    }

    sort(ans.begin(), ans.end());

    int mx = 1;
     curr = ans.at(0);

    vector <int> res;
    pair<int , string> curr_best;
    curr_best.first = 1;
    curr_best.second = ans.at(0);

    for(int i = 1; i < ans.size(); i++)
    {
        if(ans.at(i) == curr)
        {
            mx ++;
        }

        else
        {
            if(mx > curr_best.first)
            {
                curr_best.first = mx;
                curr_best.second = ans.at(i - 1);
            }
            mx = 1;
            curr = ans.at(i);
        }

        if(i == ans.size() - 1)
        {
           if(mx > curr_best.first)
            {
                curr_best.first = mx;
                curr_best.second = ans.at(i);
            }
        }
    }

    cout << curr_best.second << endl;
}
