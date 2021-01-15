#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n, p, q;
    cin >> n;

    cin >> p;

    vector <int> p_levels;
    int temp;

    for(int i = 0; i < p; i++)
    {
        cin >> temp;
        p_levels.push_back(temp);
    }

    cin >> q;

    vector <int> q_levels;

    for(int i = 0; i < q; i++)
    {
        cin >> temp;
        q_levels.push_back(temp);
    }

    vector <int> combined(p_levels.size() + q_levels.size());

    merge(p_levels.begin(), p_levels.end(), q_levels.begin(), q_levels.end(), combined.begin());

    int found = 0;


    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < combined.size(); j++)
        {
            if(i == combined[j])
            {
                found ++;
                break;
            }
        }
    }

    if(found == n)
    {
        cout<<"I become the guy.";
    }

    else
    {
        cout<<"Oh, my keyboard!";
    }

    //set_union(p_levels.begin(),p_levels.end() , q_levels.begin(), q_levels.end(), p_levels.begin());


}
