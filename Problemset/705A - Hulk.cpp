#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s = "I hate it";
    if(n == 1)
    cout<<s;


    else
    {
        s = "I hate";
        for(int i = 2; i <= n; i++ )
        {
            if(i % 2 == 0 && i <= n)
            {
                s = s + " that I love";

                if(i == n)
                {
                    s = s + " it";
                    cout << s;
                    break;
                }

            }

            else if(i % 2 && i <= n)
            {
                s = s + " that I hate";

                if(i == n)
                {
                    s += " it";
                    cout << s;
                    break;
                }
            }
        }
    }

    return 0;
}
