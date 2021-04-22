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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        priority_queue <ll> odds;
        priority_queue <ll> evens;
        ll temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp & 1)
            {
                odds.emplace(temp);
            }

            else
            {
                evens.emplace(temp);
            }
        }

        int turn = 1;
        int x = 0, y = 0;



        ll alice = 0, bob = 0;

        while(x != - 1 || y != -1)
        {
            if(odds.empty())
            {
                odds.emplace(-1);
            }

            if(evens.empty())
            {
                evens.emplace(-1);
            }

             x = odds.top();
             y = evens.top();

            if(x == -1 && y == -1)
            {
                break;
            }

            if(turn & 1) // alice turn
            {
                if(x > y)
                {
                    odds.pop();
                }

                else
                {
                    evens.pop();
                    alice += y;
                }
            }

            else        // bob turn
            {
                if(y > x)
                {
                    evens.pop();
                }

                else
                {
                    odds.pop();
                    bob += x;
                }
            }

            turn ++;
        }

        if(alice > bob)
        {
            cout << "Alice" << endl;
        }

        else if(bob > alice)
        {
            cout << "Bob" << endl;
        }

        else
        {
            cout << "Tie" << endl;
        }
    }
}
