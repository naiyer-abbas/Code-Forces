#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) == '1')
        {
            count ++;
        }

        else
        {
            count --;
        }
    }
    cout << abs(count);
}
