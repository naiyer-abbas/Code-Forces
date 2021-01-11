#include<bits/stdc++.h>
using namespace std;

bool isreverse(string, string);

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(isreverse(s1, s2) == true)
        cout<<"YES";
    else
        cout<<"NO";
}

bool isreverse(string s1, string s2)
{
    int i = 0;
    int j = s2.length() - 1;

    while(i < s1.length() && j >=0)
    {
        if(s1.at(i) != s2.at(j))
        {
            return false;
        }

        i++;
        j--;
    }
    return true;
}
