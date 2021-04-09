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
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        string ulta;

        int br = 0;

        for(int i = 0; i < n; i++)
        {
            if(a.at(i) == '0')
            {
                ulta.pb('1');
            }

            else
            {
                ulta.pb('0');
            }
        }

        int cnt_0 = 0, cnt_1 = 0;
        vector <int> stages;
        stages.pb(-1);

        for(int i = 0; i < n; i++)
        {
            if(a.at(i) == '1')
            {
                cnt_1 ++;
            }

            else if(a.at(i) == '0')
            {
                cnt_0 ++;
            }


            if(cnt_0 == cnt_1)
            {
                stages.pb(i);
            }
        }

        if(stages.size() == 1)
        {
            if(a != b)
            {
                cout << "NO" << endl;
                continue;
            }

            else
            {
                cout << "YES" << endl;
                continue;
            }
        }

       for(int i = 1; i < stages.size(); i++)
       {
           if(a.substr(stages.at(i - 1) + 1, (stages.at(i)) - stages.at(i - 1)) != b.substr(stages.at(i - 1) + 1, (stages.at(i)) - stages.at(i - 1)))
           {
               if(ulta.substr(stages.at(i - 1) + 1, (stages.at(i)) - stages.at(i - 1)) != b.substr(stages.at(i - 1) + 1, (stages.at(i)) - stages.at(i - 1)))
               {
                   cout << "NO" << endl;
                   br = 1;
                   break;
               }
           }
       }

       if(!br)
       {
           if(a.substr(stages.at(stages.size() - 1) + 1, (n - 1) - stages.at(stages.size() - 1)) == b.substr(stages.at(stages.size() - 1) + 1, (n - 1) - stages.at(stages.size() - 1)))
           cout << "YES" << endl;

           else
           {
               cout << "NO" << endl;
           }
       }

    }
}
