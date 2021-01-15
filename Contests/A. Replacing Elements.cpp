#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T)
    {
        int n, d;
        cin >> n >> d;
        vector <int> help;
        int temp;

        for(int i = 0; i < n; i++)
        {
            cin>>temp;
            help.push_back(temp);
        }

        int test = 0;

        for(const auto& e: help)
        {
            if(e <= d)
            {

            }

            else
                test ++;
        }
        sort(help.begin(), help.end());

        if(test == 0)
        {
            cout << "YES\n";
        }


        else if (help.at(0) + help.at(1) <= d)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }

        T--;

    }
    return 0;
}
