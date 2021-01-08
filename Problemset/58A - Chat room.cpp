#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    int count[4] = {0,0,0,0};
    cin>>s;
    int i = 0;
    for( i = 0; i< s.size(); i++)
    {
        if(s[i] == 'h')
        {
            count[0] ++;
            if(count[0] == 1)
            {
                s1.append("h");
                break;
            }
        }
    }

    for(i; i< s.size(); i++)
    {
        if(s[i] == 'e')
        {
            count[1] ++;
            if(count[1] == 1)
            {
                s1.append("e");
                break;
            }
        }
    }

    for(i; i< s.size(); i++)
    {
        if(s[i] == 'l')
        {
            count[2] ++;
            if(count[2] <= 2)
            {
                s1.append("l");
                if(count[2] == 2)
                  break;
            }
        }
    }

     for(i; i< s.size(); i++)
    {
        if(s[i] == 'o')
        {
            count[3] ++;
            if(count[3] == 1)
            {
                s1.append("o");
                break;
            }
        }
    }


    if(s1 == "hello")
        cout<<"YES";
    else
        cout<<"NO";
}
