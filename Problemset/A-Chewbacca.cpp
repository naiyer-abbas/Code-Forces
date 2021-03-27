#pragma GCC optimize("O2")
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
    string s;
    cin >> s;

    for(int i = 0; i <s.size(); i++)
    {
        if(i == 0 && s.at(i) == '9')
        {
            continue;
        }

        if(s.at(i) == '5')
        {
            s.at(i) = '4';
        }

        else if(s.at(i) == '6')
        {
            s.at(i) = '3';
        }

        else if(s.at(i) == '7')
        {
            s.at(i) = '2';
        }

        else if(s.at(i) == '8')
        {
            s.at(i) = '1';
        }

        else if(s.at(i) == '9')
        {
            s.at(i) = '0';
        }
    }
    cout << s << endl;
}
