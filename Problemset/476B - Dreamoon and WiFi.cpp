#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

ll prob(char p, char n, int length)
{

}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int p1 = 0, n1 = 0;

    for(int i = 0 ;i < s1.size(); i++)
    {
        if(s1.at(i) == '+')
        {
            p1 ++;
        }

        else
        {
            n1 ++;
        }
    }

    int p2 = 0, n2 = 0, q = 0;

    for(int i = 0; i < s2.size(); i++)
    {
        if(s2.at(i) == '+')
        {
            p2 ++;
        }

        else if(s2.at(i) == '-')
        {
            n2 ++;
        }

        else
        {
            q ++;
        }
    }


    if(n1 == n2 && p1 == p2)
    {
        cout << 1.000000000000;
        return 0;
    }

    ll p = (int) pow(2, q);
}
