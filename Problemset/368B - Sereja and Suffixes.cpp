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
    int n, m;
    cin >> n >> m;
    vector <int> v(n + 1);
    v.pb(0);
    unordered_set <int> s;
    int arr[100001] = {};

    for(int i = 1; i <= n; i++)
    {
        cin >> v.at(i);
        s.insert(v.at(i));
        arr[v.at(i)]++;
    }

    int x = s.size();

    vector <int> ans(n + 1);
    ans.at(0) = 0;
    ans.at(1) = x;

    for(int i = 2; i <= n; i++)
    {
        arr[v.at(i - 1)]--;
        int c = arr[v.at(i - 1)];
        if(c == 0)
        {
            ans.at(i) = ans.at(i - 1) - 1;
        }

        else
        {
            ans.at(i) = ans.at(i - 1);
        }
    }
    int temp;

    while(m --)
    {
        cin >> temp;
        cout << ans.at(temp) << endl;

    }
}
