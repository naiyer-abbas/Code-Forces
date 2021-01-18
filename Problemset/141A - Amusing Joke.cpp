#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);

int main()
{
    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    if(s3.size() != s1.size() + s2.size())
    {
        cout << "NO";
    }

    else
    {
        int h1[26] = {};
        int h2[26] = {};

        for(int i = 0; i < s1.size(); i++)
        {
            h1[s1.at(i) - 65] ++;
        }

        for(int j = 0; j < s2.size(); j++)
        {
            h1[s2.at(j) - 65] ++;
        }



        for(int i = 0; i < s3.size(); i++)
        {
            h2[s3.at(i) - 65] ++;
        }

        int k = 0;

        for(k = 0; k < 26; k ++)
        {
            if(h1[k] != h2[k])
            {
                cout<<"NO";
                break;
            }
        }

        if(k == 26)
        {
            cout << "YES";
        }


    }
}
