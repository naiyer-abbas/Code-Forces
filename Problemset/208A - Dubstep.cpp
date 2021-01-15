#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    string res;

    vector <int> i_values;

    for(int i = 0; i < s.size(); i++)
    {

        if( i < s.size() - 2 && s.at(i) == 'W' && s.at(i + 1) == 'U' && s.at(i + 2) == 'B' )
        {
            i += 2;
        }

        else
        {
            i_values.push_back(i);
            int p = i_values.size();
            if(i - (i_values[p - 2]) > 1)
            res.push_back(' ');
            res.push_back(s.at(i));

        }
    }

    cout<<res;

}
