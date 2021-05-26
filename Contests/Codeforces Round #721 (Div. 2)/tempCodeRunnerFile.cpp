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
        string s;
        cin >> s;

        int z = 0;
        for(int i = 0; i < n; i++)
        {
            if(s.at(i) == '0')
            {
                z ++;
            }
        }

        if(z == 1)
        {
            cout << "BOB" << endl;
            continue;
        }

        int alice = 0, bob = 0;

        if(n % 2 && s[n / 2] == '0')
        {
            z --;
            alice ++;   // here alice spends only 1 $ to make string pallindrome
            int turn = 1;
            while(z)
            {
                if(turn % 2)
                {
                    bob ++;
                    z --;
                    if(!z)
                    {
                        break;
                    }

                    bob ++;
                    z --;
                }

                else
                {
                    alice ++;
                    z --;
                    if(!z)
                    {
                        break;
                    }
                    z --;
                    alice ++;
                }

                turn ++;
            }
        }

        else
        {
            z -= 2;
            alice += 2;  // here she spends 2
            int turn = 1;
            while(z)
            {
                if(turn % 2)
                {
                   bob ++;
                    z --;
                    if(!z)
                    {
                        break;
                    }

                    bob ++;
                    z --; 
                }

                else
                {
                    alice ++;
                    z --;
                    if(!z)
                    {
                        break;
                    }
                    z --;
                    alice ++;
                }

                turn ++;
            }
        }

        if(alice > bob)
        {
            cout << "BOB" << endl;
            continue;
        }

        if(bob > alice)
        {
            cout << "ALICE" << endl;
            continue;
        }

        cout << "BOB" << endl;
    }
}