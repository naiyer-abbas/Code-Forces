#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

string reflection(string s)
{
    string temp;
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 2)
        {
            temp.pb(':');
            continue;
        }

        if(s.at(i) == '0')
        {
            temp.pb('0');
        }

        else if(s.at(i) == '1')
        {
            temp.pb('1');
        }

        else if(s.at(i) == '2')
        {
            temp.pb('5');
        }

        else if(s.at(i) == '5')
        {
            temp.pb('2');
        }

        else if(s.at(i) == '8')
        {
            temp.pb('8');
        }

        else
        {
            temp = "-1";
            return temp;
        }
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int calc_h(string s)        // converts the hours string into int
{
    int h;
    h = stoi(s.substr(0,2));
    return h;
}

int calc_m(string s)
{
    int m;
    m = stoi(s.substr(3,5));
    return m;
}

int is_time_valid(string s, int h, int m) // checks whwther real time is valid or not
{
    int hours = calc_h(s);
    int minutes = calc_m(s);

    if(hours >= h || minutes >= m)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int is_ref_valid(string s, int h, int m)    // checks whether the reflection of the time is valid or not
{

    if(reflection(s) == "-1")
    {
        return 0;
    }

    int hours = calc_h(reflection(s));
    int minutes = calc_m(reflection(s));

    if(hours >= h || minutes >= m)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

string make_time(int h, int m)
{
    string temp;
    temp += to_string(h);
    if(temp.length() == 1)
    {
        temp.pb(temp.at(0));
        temp.at(0) = '0';
    }
    temp += ":";
    temp += to_string(m);
    if(temp.length() == 4)
    {
        temp.pb(temp.at(3));
        temp.at(3) = '0';
    }
    return temp;

}

string inc_time(string s, int h, int m) // increments time
{
    string temp;

    if(calc_h(s) < h - 1 && calc_m(s) < m - 1)
    {
         temp = make_time(calc_h(s), calc_m(s) + 1);
         return temp;
    }

    if(calc_m(s) == m - 1 && calc_h(s) < h - 1)
    {
        temp = make_time(calc_h(s) + 1, 0);
        return temp;
    }

    if(calc_h(s) == h - 1 && calc_m(s) < m - 1)
    {
        temp = make_time(calc_h(s), calc_m(s) + 1);
        return temp;
    }

    if(calc_h(s) == h - 1 && calc_m(s) == m - 1)
    {
        temp = make_time(0,0);
        return temp;
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int h, m;
        cin >> h >> m;
        string s;
        cin >> s;

        if(is_time_valid(s,h,m) && is_ref_valid(s,h,m))
        {
            cout << s << endl;
            continue;
        }

        else
        {
            string x;
            string temp = s;
            for(ll i = 0; i < 100000000; i++)
            {
                x = inc_time(temp, h, m);
                if(is_time_valid(x, h, m) && is_ref_valid(x, h, m))
                {
                    cout << x << endl;
                    break;
                }
                temp = x;
            }
        }
    }
}
