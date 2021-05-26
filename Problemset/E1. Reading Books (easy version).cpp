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
    int n, k;
    cin >> n >> k;

    vector <int> alice;
    vector <int> bob;
    vector <int> both;

    int t, a, b;
    while(n --)
    {
        cin >> t >> a >> b;
        if(a && b)
        {
            both.pb(t);
        }

        else if(a)
        {
            alice.pb(t);
        }

        else if(b)
        {
            bob.pb(t);
        }
    }

    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    sort(both.begin(), both.end());

    int cnt_alice = k, cnt_bob = k, total = 0;

    int i = 0, j = 0, z = 0;

    if(both.size() + alice.size() < k || both.size() + bob.size() < k)
    {
        cout << -1;
        return 0;
    }

    while(cnt_alice > 0 && cnt_bob > 0)
    {
       if(z < both.size() && i < alice.size() && j < bob.size())
       {
           if(both.at(z) <= alice.at(i) + bob.at(j))
           {
               total += both.at(z++);
           }

           else
           {
               total += alice.at(i ++) + bob.at(j ++);
           }
       }

       else if(z >= both.size())
       {
           total += alice.at(i ++) + bob.at(j ++);
       }

       else if(i >= alice.size() || j>= bob.size())
       {
           total += both.at(z++);
       }

       cnt_alice --;
       cnt_bob --;
    }

    cout << total << endl;
}
