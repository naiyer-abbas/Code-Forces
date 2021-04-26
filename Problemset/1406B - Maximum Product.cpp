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
        vector <int> v_pos;
        vector <int> v_neg;
        int pos = 0, neg = 0;
        int temp;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp >= 0)
            {
                v_pos.pb(temp);
                pos ++;
            }

            else
            {
                v_neg.pb(abs(temp));
                neg ++;
            }
        }

        sort(v_pos.begin(), v_pos.end());
        sort(v_neg.begin(), v_neg.end());

        ll res = 1;

        if(pos == 0)
        {
            int i = 0;
            for(auto &e : v_neg)
            {
                res = res * e;
                i ++;
                if(i == 5)
                {
                    break;
                }
            }

            cout << -1 * res << endl;
            continue;
        }

        if(neg == 0)
        {
            for(int i = n - 1; i >= n - 5; i--)
            {
                res = res * v_pos.at(i);
            }

            cout << res << endl;
            continue;
        }

        vector <ll> ans;

        for(int i = 0; i <= 5; i++)
        {
            if(i <= neg && pos >= (5 - i))
            {
                if(i % 2)
                {
                    ll t = 1;
                    int m = 0;
                    for(auto &e : v_neg)
                    {
                        t = t * e;
                        m ++;
                        if(m == i)
                        {
                            break;
                        }
                    }

                    m = 0;

                    for(int j = pos - 1; j >= pos - (5 - i); j--)
                    {
                        t = t * v_pos.at(j);
                    }

                    ans.pb(-1 * t);
                }

                else
                {
                    ll t = 1;
                    int m = 0;

                    for(int j = neg - 1; j >= neg - i; j--)
                    {
                        t = t * v_neg.at(j);
                    }


                    m = 0;

                    for(int j = pos - 1; j >= pos - (5 - i); j--)
                    {
                        t = t * v_pos.at(j);
                    }

                    ans.pb(t);
                }
            }
        }

        cout << *max_element(ans.begin(), ans.end()) << endl;


    }
}
