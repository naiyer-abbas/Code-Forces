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
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        vector <int> v(n);


        for(auto &e : v)
        {
            cin >> e;
        }

        bool test = true;

        int num = v.at(0);

        for(int i = 1; i < n; i++)
        {
            if(num != v.at(i))
            {
                test = false;
                break;
            }
        }

        if(test == true)
        {
            cout << 0 << endl;
            continue;
        }



        int mn = n - 1;
        ll sum  = accumulate(v.begin(), v.end(), 0LL);

        set <ll> fact;

        for(int i = 1; i * i <= sum; i++)
        {
            if(sum % i == 0)
            {
                fact.insert(i);
                fact.insert(sum / i);
            }
        }

        vector <ll> factor;

        for(auto & e : fact)
        {
            factor.pb(e);
        }

        int br = 0;

        for(int i = 0; i < factor.size(); i++)
        {
            if(sum / factor.at(i) < n)
            {
                ll s = 0;
                for(int j = 0; j < n; i++)
                {
                    s += v.at(j);
                    if(s == factor.at(i))
                    {
                        s = 0;
                    }

                    if(j == n - 1 && s == 0)
                    {
                        cout << sum / factor.at(i) << endl;
                        br = 1;
                        break;
                    }

                    if(s > factor.at(i) || (j == n - 1 && s != factor.at(i)))
                    {
                        break;
                    }

                }
            }
            if(br)
            {
                break;
            }
        }

    }
}
