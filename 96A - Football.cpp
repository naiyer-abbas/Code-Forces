#include<bits/stdc++.h>
using namespace std;

void dangerous(string);

int main()
{
    string s;
    cin>>s;
    dangerous(s);
}

void dangerous(string s)
{
    int zeros = 1;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == '0' && s[i+1] == '0')
        {
            zeros ++;
            if(zeros >=7)
            {
                break;
            }
        }
        else
        {
            zeros = 1;
        }
    }
    int ones = 1;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == '1' && s[i+1] == '1')
        {
            ones ++;
            if(ones >= 7)
            {
                break;
            }
        }
        else
        {
            ones = 1;
        }
    }
    if(ones >= 7 || zeros >= 7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    /*if(zeros >= 7 || ones >= 7)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }*/

}


