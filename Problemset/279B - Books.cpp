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
    ll n, t;
    cin >> n >> t;
    vector <int> v(n);

    for(auto &e : v)
    {
        cin >> e;
    }

    int m = 0;
    ll sum = 0;
    int c = 0;
    int mark = 0;

    vector <int> ans;

    for(int i = 0; i < n; i++)
    {
        c++;
        sum += v.at(i);
        if(sum > t)
        {
            c--;
            m = max(m, c);
            sum = sum - v.at(mark);
            mark++;
        }

        else if(sum == t)
        {
            m = max(m, c);
            c--;
            sum = sum - v.at(mark);
            mark ++;
        }

        else if(i == n - 1)
        {
            m = max(m, c);
            sum = sum - v.at(mark);
            mark++;
        }
    }

    cout << m;

}
