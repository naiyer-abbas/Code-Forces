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
    //fast;
    int t ;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        int temp;
        int v[1000001] = {};
        unordered_set <int> s;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            s.insert(temp);
            v[temp] ++;
        }

        int x = s.size();

       int ans = -123;

       for(auto &e : s)
       {
           if(ans < max(min(x - 1, v[e]), min(x, v[e] - 1)))
           {
               ans = max(min(x - 1, v[e]), min(x, v[e] - 1));
           }
       }
       cout << ans << endl;

    }
}
