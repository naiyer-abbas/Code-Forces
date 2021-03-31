#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
    fast
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <ll> ans;


    for(int i = 0; i < n; i++)
    {
       if(s.at(i) == '2')
       {
           ans.pb(2);
       }

       else if(s.at(i) == '3')
       {
           ans.pb(3);
       }

        else if(s.at(i) == '4')
       {
           ans.pb(2);
           ans.pb(2);
           ans.pb(3);
       }

        else if(s.at(i) == '5')
       {
           ans.pb(5);
       }

        else if(s.at(i) == '6')
       {
           ans.pb(3);
           ans.pb(5);
       }

        else if(s.at(i) == '7')
       {
           ans.pb(7);
       }

        else if(s.at(i) == '8')
       {
           ans.pb(2);
           ans.pb(2);
           ans.pb(2);
           ans.pb(7);
       }

        else if(s.at(i) == '9')
       {
           ans.pb(2);
           ans.pb(3);
           ans.pb(3);
           ans.pb(7);
       }
    }

    sort(ans.rbegin(), ans.rend());

    for(auto &e : ans)
    {
        cout << e;
    }
}
