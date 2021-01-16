#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin , s);

    vector <char> final;

    for(int i = 1; i < s.size() - 1; i ++)
    {
        final.push_back(s[i]);
    }

    sort(final.begin(), final.end());

    vector <char> :: iterator ip;

    ip = unique(final.begin(), final.end());

    final.resize(distance(final.begin(), ip));

    if(final.size() == 0)
        cout<<0;

    else if(final.size() == 1)
        cout<<1;

    else
    {
        cout << final.size() - 2;
    }




}
