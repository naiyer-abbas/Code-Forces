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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        vector <int> v;
        int i = n;
        while(i != 0)
        {
            v.pb(i);
            i --;
        }

        for(int i = 0; i < v.size(); i++)
        {
            if(v.at(i) == i + 1)
            {
                for(int j = 0; j < v.size(); j++)
                {
                    if(v.at(j) != i + 1)
                    {
                        swap(v.at(i), v.at(j));
                        break;
                    }
                }
            }
        }

        for(auto &e : v)
        {
            cout << e << " ";
        }
        cout << endl;
    }
}
