#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

void solve(int, int, vector <int>);

int main()
{
    fast;
    int n , k;
    cin >> n >> k;
    vector <int> v;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }
    solve(n , k, v);
}

void solve(int n, int k, vector <int> v)
{
    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        sum += v.at(i);
    }

    vector <int> val;
    val.pb(sum);
    vector <int> flag;
    flag.pb(1);

    int x = 0;
    for(int i = 0; i < (n - k); i++)
    {
        sum = val.at(val.size() - 1);
        val.pb(sum);
        flag.pb(i + 1);
        val.pb((sum - v.at(i)) + v.at(i + k));
        flag.pb(i + 2);
    }
    cout << flag.at(min_element(val.begin(), val.end()) - val.begin());
}
