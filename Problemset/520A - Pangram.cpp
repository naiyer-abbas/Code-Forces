#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s ;

    if(s.size() < 26)
    {
        cout<<"NO";
    }

    else
    {
        int flag[26] = { };

        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 65; j < 123; j++)
            {
                if(s[i] == j && s[i] <= 90)
                {
                    flag[j - 65] = 1;
                }

                else if(s[i] == j && s[i] >= 97)
                {
                    flag[j - 97] = 1;
                }

                if(j == 90 )
                {
                    j = 96;
                }
             }
         }


    sort(flag, flag + 26);

    for(int i = 0; i < 26; i++)
    {
        cout<<endl<<flag[i];
    }
    if(flag[0] == 0)
        cout<<"NO";
    else
        cout<<"YES";
    }

    return 0;


}
