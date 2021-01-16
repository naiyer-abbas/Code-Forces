#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> values;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        values.pb(temp);
        values.at(i) %= 2;
    }

    if(values[0] == values[1])
    {
        for(int i = 2; i < values.size(); i++)
        {
            if(values[i] != values[0])
            {
                cout<< i + 1;
                break;
            }
        }
    }

    else
    {
        if(values[0] == values[2])
        {
            cout<< 2;
        }

        else if(values[1] == values[2])
        {
            cout<< 1;
        }
    }

}
