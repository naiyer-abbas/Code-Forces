#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define pb push_back


int main()
{
    fast;

    int n;
    cin >> n;
    vector <char> input;

    string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        input.pb (s[0]);
    }

    int faces = 0;

    for(const auto& e: input)
    {
        if(e == 'T')
            faces += 4;

        else if(e == 'C')
            faces += 6;

        else if(e == 'D')
            faces += 12;

        else if(e == 'O')
            faces += 8;

        else
            faces += 20;
    }

    cout << faces;

}
