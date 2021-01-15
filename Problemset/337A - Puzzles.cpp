#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int temp;
    vector <int> puzzles;

    for(int i = 0; i < m; i ++)
    {
        cin >> temp;
        puzzles.push_back(temp);
    }

    sort(puzzles.begin(), puzzles.end());

    vector <int> jump;
    int min = puzzles.at(0 + (n-1)) - puzzles.at(0);

    for(int i = 0; i <= puzzles.size() - n; i++)
    {
        if(puzzles.at(i + (n-1)) - puzzles.at(i) <= min)
        {
            min = puzzles.at(i + (n-1)) - puzzles.at(i);
        }
    }

    cout<<min;


return 0;
}
