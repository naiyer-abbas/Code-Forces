#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <string> magnets;
    string temp;
    int groups = 1;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        magnets.push_back(temp);
    }

    for(int i = 0; i < n-1; i++)
    {
         if(magnets.at(i).at(1) == '1' && magnets.at(i+1).at(0) == '1')
        {
            groups++;
        }

        else if(magnets.at(i).at(1) == '0' && magnets.at(i+1).at(0) == '0')
        {
            groups ++;
        }

    }

    cout<<groups;
}
