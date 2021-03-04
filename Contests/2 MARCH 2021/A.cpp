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

        stack <char> st1;
        stack <char> st2;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == s.at(0))
            {
                st1.push('(');
            }

            else if(s.at(i) == s.at(s.size() - 1))
            {
                if(st1.empty() == 0)
                {
                   st1.pop();
                }


                else
                {
                   st1.push('a');
                    break;
                }

            }

            else
            {
                st1.push('(');
            }
        }

         for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == s.at(0))
            {
                st2.push('(');
            }

            else if(s.at(i) == s.at(s.size() - 1))
            {
                if(st2.empty() == 0)
                st2.pop();

                else
                {
                    st2.push('a');
                    break;
                }
            }

            else
            {
                if(st2.empty() == 0)
                st2.pop();

                else
                {
                    st2.push('a');
                    break;
                }
            }
        }

        if(st1.empty() || st2.empty())
        {
            cout << "YES" <<endl;
        }

        else
        {
            cout <<"NO"<<endl;
        }



    }
}
