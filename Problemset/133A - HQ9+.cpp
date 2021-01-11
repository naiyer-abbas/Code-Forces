#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i = 0;

    for(i = 0; i < s.size(); i++)
    {
        if(s.at(i) == 'H' || s.at(i) == 'Q' || s.at(i) == '9')
        {
            cout<<"YES";
            break;
        }

    }

    if(i == s.size())
        cout<<"NO";
}
