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

    int found = 0;

    int al1, bl1;

    //search AB from left


    for(int i = 0; i < s.size() - 1; i++)
    {
        if(found)
        {
            break;
        }

        if(s.at(i) == 'A' && s.at(i + 1) == 'B')
        {
            found = 1;
            al1 = i;
            bl1 = i + 1;
        }
    }

    if(!found)
    {
        cout << "NO";
        return 0;
    }

    found = 0;

    // search BA from right

    int ar1, br1;

     for(int i = s.size() - 1; i > 0; i--)
    {
        if(found)
        {
            break;
        }

        if(s.at(i) == 'A' && s.at(i - 1) == 'B')
        {
            found = 1;
            ar1 = i;
            br1 = i - 1;
        }
    }

    if(!found)
    {
        cout << "NO";
        return 0;
    }

    // search AB from right

    int al2, bl2, ar2, br2;

    found = 0;

     for(int i = s.size() - 1; i > 0; i--)
    {
        if(found)
        {
            break;
        }

        if(s.at(i) == 'B' && s.at(i - 1) == 'A')
        {
            found = 1;
            br2 = i;
            ar2 = i - 1;
        }
    }

    // search BA from left

    found = 0;

    for(int i = 0; i < s.size() - 1; i++)
    {
        if(found)
        {
            break;
        }

        if(s.at(i) == 'B' && s.at(i + 1) == 'A')
        {
            found = 1;
            bl2 = i;
            al2 = i + 1;
        }
    }

    if(al1 == ar1 || bl1 == br1)
    {
        if(ar2 == al2 || br2 == bl2)
        {
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";
}
