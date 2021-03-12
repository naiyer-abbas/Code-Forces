#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int pallindrome(string s)
{
    string s1 = s;
    reverse(s.begin(), s.end());
    if(s1 == s)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(k == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if(n % 2 == 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            if(pallindrome(s) && k <= n / 2)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
