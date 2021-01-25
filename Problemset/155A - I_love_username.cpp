#include <bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0);    cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

int main()
{
    fast;
    int n;
    cin >> n;
    vector <int> scores;

    int temp;


    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        scores.pb(temp);
    }

    int min = scores.at(0);
    int max = scores.at(0);
    int count = 0;

    for(int i = 1; i < n; i++)
    {
        if(scores.at(i) > max)
        {
            max = scores.at(i);
            count ++;
        }

        else if(scores.at(i) < min)
        {
            min = scores.at(i);
            count ++;
        }
    }

    cout << count;

}
