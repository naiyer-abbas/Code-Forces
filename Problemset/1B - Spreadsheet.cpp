#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int which_type(string s)
{
    int found_r = 0, found_c = 0, ok = 0;

    if(s.at(0) == 'R')
    {
        found_r = 1;
    }

    if(s.at(1) >= 48)
    {
        ok = 1;
    }

    for(int i = 2; i < s.size(); i++)
    {
        if(s.at(i) == 'C')
        {
            found_c = 1;
            break;
        }
    }

    if(found_c && found_r && ok)
    {
        return 1;
    }

    return 2;
}

string type_1_to_2(string s)
{
    string row;
    for(int i = 1; i < s.size(); i++)
    {
        if(s.at(i) == 'C')
        {
            break;
        }

        row.pb(s.at(i));
    }

    string column;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s.at(i) == 'C')
        {
            break;
        }

        column.pb(s.at(i));
    }

    reverse(column.begin(), column.end());
    int x = stoi(column);
}

void type2_to_1(string s)
{
    string column;
    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) >= 48 && s.at(i) <= 57)
        {
            break;
        }

        column.pb(s.at(i));
    }

    int column_number = 0;

    int i = 0;
    int j = column.size() - 1;

    while(i < column.size())
    {
        column_number += (column.at(j) - 64) * (int)pow(26, i);
        j --;
        i ++;
    }

    string row;

    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s.at(i) >= 65)
        {
            break;
        }

        row.pb(s.at(i));
    }

    reverse(row.begin(), row.end());

    cout << "R" << row << "C" << column_number;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int type = which_type(s);
    if(type == 1)
    {
        cout << type_1_to_2(s);
        return 0;
    }

    else
    {
        type2_to_1(s);
        return 0;
    }
}
