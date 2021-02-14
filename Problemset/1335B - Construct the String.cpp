#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n, a ,b;
        cin >> n >> a >> b;
        string s;
        int temp = 0;

        while(n --)
        {
            s.pb(97 + temp);
            temp ++;
            if(temp == b)
            {
                temp = 0;
            }
        }
        cout << s << endl;
    }
}
