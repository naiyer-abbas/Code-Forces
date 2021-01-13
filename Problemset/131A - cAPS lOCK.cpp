#include<bits/stdc++.h>
using namespace std;

bool isalluppper(string);

int main()
{
    string s;
    cin>>s;
    string s1;

    for(int i = 0; i < s.length() - 1; i++ )
    {
        s1.push_back(s.at(i+1));
    }


    if(isalluppper(s) == true)
    {
        for(int i = 0; i < s.size(); i++ )
        {
            s.at(i) = s.at(i) + 32;
        }
    }

    else if(s[0] >= 97 && s[0] <= 123 && isalluppper(s1) == true)
    {
        for(int i = 1; i < s.size(); i++ )
        {
            s.at(i) += 32;
        }
        s[0] -= 32;
    }

    cout<<s;



return 0;
}

bool isalluppper(string s)
{
    int i = 0;
    for(i = 0; i < s.size(); i++)
    {
        if(s.at(i) >= 65 && s.at(i) < 97)
        {

        }

        else
        {
            return false;
            break;
        }
    }

    if(i == s.size())
        return true;
}
