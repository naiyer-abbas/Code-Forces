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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin>> s;
    int sum = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) == '1')
        {
            sum += a;
        }

        else if(s.at(i) == '2')
        {
            sum += b;
        }

        else if(s.at(i) == '3')
        {
            sum += c;
        }

        else
        {
            sum += d;
        }
    }
    cout << sum;
}
