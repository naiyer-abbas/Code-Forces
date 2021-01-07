#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(s[i] == s[j])
            {

                s.erase(s.begin() + j);
                i--;

            }

        }
    }
    cout<<s.size()<<endl;

    if(s.size()%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
        return 0;
}
