#include<bits/stdc++.h>

using namespace std;

string str_with_num(string, int);
int is_divisible(string, string);
bool allCharactersSame(string s);
int gcd(long long int a, long long int b);
int lcm(int a, int b);

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>> q;
    vector <string> answer;

    while(q)
    {
        string s, t;
        cin >> s >> t;

        if(is_divisible(s, t))
            answer.push_back(s);
        else if(is_divisible(t, s))
            answer.push_back(t);

         else if(is_divisible(t, s) == 0 && is_divisible(s, t) == 0)
         {
            if(allCharactersSame(t) && allCharactersSame(s) && s[0] == t[0])
            {
               answer.push_back(str_with_num(string(1, s[0]), lcm(s.size(), t.size())));
            }

            else
            {
                answer.push_back("-1");
            }
         }
        q--;
    }
    for(const auto& e: answer)
    {
        cout<<e<<endl;
    }
    return 0;
}

string str_with_num(string s, int n)
{
    string temp = s;
    for(int i = 1; i < n; i++)
    {
        s += temp;
    }

    return s;
}

int is_divisible(string s1, string s2 )
{
    int i = 1;
    for(i = 1; i <= s1.size(); i++)
    {
        if( str_with_num(s2, i) == s1)
        {
            return 1;
        }
    }

    if(i == s1.size() + 1)
    {
        return 0;
    }
}

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}

int gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


