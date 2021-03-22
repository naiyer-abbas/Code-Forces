#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int main()
{
    fast;
    int n;
    cin >> n;

    vector <int> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    vector < pair <ll, ll> > ans;

    for(int i = 0; i < n - 1; i++)
    {
        ans.pb(mp(min(v.at(i), v.at(i + 1)), max(v.at(i), v.at(i + 1))));
    }

    int flag = 0;

    sort(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++)
    {
       for(int j = i + 1; j < ans.size(); j++)
       {
           if(ans.at(j).first > ans.at(i).first && ans.at(j).first < ans.at(i).second && ans.at(j).second > ans.at(i).second)
           {
               cout << "yes" << endl;
               flag = 1;
               break;
           }

           else if(ans.at(j).first < ans.at(i).first && ans.at(j).second < ans.at(i).second && ans.at(j).second > ans.at(i).first)
           {
               cout << "yes" << endl;
               flag = 1;
               break;
           }
       }

       if(flag)
       {
           break;
       }
    }

    if(!flag)
    {
        cout << "no" << endl;
    }

}
