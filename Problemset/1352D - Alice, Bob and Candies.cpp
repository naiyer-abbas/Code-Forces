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

        vector <int> v(n);

        vector <int> prefix;
        vector <int> suffix;

        int sum = 0;

        for(auto &e: v)
        {
            cin >> e;
        }

        int temp = 0;

        int target = 0;
        int mov = 1;

        // if mov is odd then alice turn, else bob's turn

        int sum_alice = 0;
        int sum_bob = 0;

        int s = 0, l = n - 1;

        while(s <= l)
        {
            if(mov % 2) // alice's turn
            {
                temp = 0;
                while(temp <= target)
                {
                    temp += v.at(s);
                    s++;
                    if(s > l)
                    {
                        break;
                    }
                }

                sum_alice += temp;
                mov ++;
                target = temp;
            }

            else if(mov % 2 == 0)
            {
                temp = 0;
                while(temp <= target)
                {
                    temp += v.at(l);
                    l --;

                    if(s > l)
                    {
                        break;
                    }
                }

                sum_bob += temp;
                mov ++;
                target = temp;
            }
        }

        cout << mov - 1 << " " << sum_alice << " " << sum_bob << endl;

    }
}
