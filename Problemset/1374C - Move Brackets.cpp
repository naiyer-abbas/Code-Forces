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
        string s;
        cin >> s;
        stack <char> st;
        int count = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == '(')
            {
                st.push('(');
            }

            else if(s.at(i) == ')' && st.empty())
            {
                count ++;
            }

            else if(s.at(i) == ')' && !st.empty())
            {
                st.pop();
            }
        }

        while(!st.empty())
        {
            st.pop();
            count ++;
        }

        cout << count / 2 << endl;
    }
}
