#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair


int main()
{
    fast;

    int n;
    cin >> n;

    vector < pair < int , int > > uniforms;

    int home, away;

    int conflict = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> home >> away;
        uniforms.pb( mp(home , away));
    }

    for(int i = 0; i < uniforms.size(); i++)
    {
        for(int j = 0; j < uniforms.size(); j++)
        {
            if(j != i)
            {
                if(uniforms.at(i).first == uniforms.at(j).second)
                {
                    conflict ++ ;
                }
            }
        }
    }
    cout << conflict;



 return 0;
}

