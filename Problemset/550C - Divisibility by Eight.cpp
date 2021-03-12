#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int string_to_num(string s)
{
    return stoi(s);
}

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) == '8')
        {
            cout << "YES" << endl;
            cout << 8 << endl;
            return 0;
        }

        if(s.at(i) == '0')
        {
            cout << "YES" << endl;
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            if(s.at(i) != '0')
            {
                string temp;
                temp.push_back(s.at(i));
                temp.push_back(s.at(j));
                if(string_to_num(temp) % 8 == 0 || string_to_num(temp) == 0)
                    {
                        cout << "YES" << endl;
                        cout << temp << endl;
                        return 0;
                    }
            }
        }
    }

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            for(int k = j + 1; k < s.size(); k++)
            {
                if(s.at(i) != 0)
                {
                    string temp;
                    temp.push_back(s.at(i));
                    temp.push_back(s.at(j));
                    temp.push_back(s.at(k));
                    if(string_to_num(temp) % 8 == 0 || string_to_num(temp) == 0)
                    {
                        cout << "YES" << endl;
                        cout << temp << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "NO" << endl;
}
