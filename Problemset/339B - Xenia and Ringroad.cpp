#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
#define ll long long int

int main()
{
    fast;

    ll n, m;
    cin >> n >> m;

    vector <ll> task;

    ll temp;

    for(int i = 0; i < m; i ++)
    {
        cin >> temp;
        task.pb(temp);
    }

    ll cost = task.at(0) - 1;

    for(int i = 1; i < m; i++)
    {
        if(task.at(i) > task.at(i - 1))
        {
            cost += task.at(i) - task.at(i - 1);
        }

        else if(task.at(i) < task.at(i - 1))
        {
            cost += ((n - task.at(i - 1)) + task.at(i));
        }

    }

    cout << cost;



}
